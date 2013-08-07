/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

// Qt includes
#include <QDebug>
#include <QDir>
#include <QTextStream>
#include <QStringList>

// CTK includes
#include "ctkUtils.h"

// STD includes
#include <cstdlib>
#include <iostream>
#include <string>


//-----------------------------------------------------------------------------
int ctkUtilsTest5(int argc, char * argv [] )
{
  Q_UNUSED(argc);
  Q_UNUSED(argv);

  //-------Test Function composePath(const QString& absolutePath, const QString& contents, const QString & file)
  QString absolutePath= "User/C/D" ;
  QString contents ="Contents";
  QString file= "..";
  QString file2 ="bonjour";
  QStringList dir;
  dir << absolutePath << contents << file << file2;

  if (ctk::composePath(dir).absoluteFilePath().isEmpty())
    {
    qWarning() << "Line" << __LINE__ << "ctk::composePath() failed: "<<ctk::composePath(dir).filePath();
    return EXIT_FAILURE;
    }
  qDebug() << "Line" << __LINE__ << "QStringList : "<< dir;
  qDebug() << "Line" << __LINE__ << "ctk::composePath() succed: "<<ctk::composePath(dir).filePath();
  return EXIT_SUCCESS;
}
