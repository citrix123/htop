/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_MainPanel
#define HEADER_MainPanel
/*
htop - ColumnsPanel.h
(C) 2004-2015 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "Panel.h"
#include "Action.h"
#include "Settings.h"

typedef struct MainPanel_ {
   Panel super;
   State* state;
   IncSet* inc;
   FunctionBar* fuBar;
   Htop_Action *keys;
   pid_t pidSearch;
} MainPanel;

typedef bool(*MainPanel_ForeachProcessFn)(Process*, size_t);


void MainPanel_updateTreeFunctions(FunctionBar* fuBar, bool mode);

void MainPanel_pidSearch(MainPanel* this, int ch);

int MainPanel_selectedPid(MainPanel* this);

const char* MainPanel_getValue(MainPanel* this, int i);

bool MainPanel_foreachProcess(MainPanel* this, MainPanel_ForeachProcessFn fn, int arg, bool* wasAnyTagged);

extern PanelClass MainPanel_class;

MainPanel* MainPanel_new(FunctionBar* fuBar);

void MainPanel_setState(MainPanel* this, State* state);

void MainPanel_delete(Object* object);

#endif
