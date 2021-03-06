/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0.txt

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

// CTK includes
#include "ctkVTKChartView.h"
#include "ctkVTKChartViewPlugin.h"

//-----------------------------------------------------------------------------
ctkVTKChartViewPlugin
::ctkVTKChartViewPlugin(QObject *parentObject)
 : QObject(parentObject)
{
}

//-----------------------------------------------------------------------------
QWidget *ctkVTKChartViewPlugin::createWidget(QWidget *parentWidget)
{
  ctkVTKChartView* newWidget = new ctkVTKChartView(parentWidget);
  return newWidget;
}

//-----------------------------------------------------------------------------
QString ctkVTKChartViewPlugin::domXml() const
{
  return "<widget class=\"ctkVTKChartView\" name=\"ChartView\">\n"
         "</widget>\n";
}

//-----------------------------------------------------------------------------
QString ctkVTKChartViewPlugin::includeFile() const
{
  return "ctkVTKChartView.h";
}

//-----------------------------------------------------------------------------
bool ctkVTKChartViewPlugin::isContainer() const
{
  return false;
}

//-----------------------------------------------------------------------------
QString ctkVTKChartViewPlugin::name() const
{
  return "ctkVTKChartView";
}
