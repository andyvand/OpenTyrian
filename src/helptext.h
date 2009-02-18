/* 
 * OpenTyrian Classic: A modern cross-platform port of Tyrian
 * Copyright (C) 2007-2009  The OpenTyrian Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef HELPTEXT_H
#define HELPTEXT_H

#include "opentyr.h"


#define MAX_HELP_MESSAGE 39
#define MAX_MENU 14

#define DESTRUCT_MODES 5

extern JE_byte verticalHeight;
extern JE_byte helpBoxColor, helpBoxBrightness, helpBoxShadeType;
extern char helpTxt[MAX_HELP_MESSAGE][231];
extern char pName[21][16];              /* [1..21] of string [15] */
#ifdef TYRIAN2000
extern char miscText[72][42]; 			/* [1..72] of string [41] */
extern char miscTextB[8][12]; 			/* [1..8] of string [11] */
extern char menuText[7][29]; 			/* [1..7] of string [29] */
#else
extern char miscText[68][42];           /* [1..68] of string [41] */
extern char miscTextB[5][11];           /* [1..5] of string [10] */
extern char menuText[7][21];            /* [1..7] of string [20] */
#endif
extern char outputs[9][31];             /* [1..9] of string [30] */
extern char topicName[6][21];           /* [1..6] of string [20] */
#ifdef TYRIAN2000
extern char mainMenuHelp[37][66];
#else
extern char mainMenuHelp[34][66];
#endif
extern char inGameText[6][21];          /* [1..6] of string [20] */
extern char detailLevel[6][13];         /* [1..6] of string [12] */
extern char gameSpeedText[5][13];       /* [1..5] of string [12] */
extern char inputDevices[3][13];        /* [1..3] of string [12] */
#ifdef TYRIAN2000
extern char networkText[5][33]; 		/* [1..5] of string [32] */
#else
extern char networkText[4][21];         /* [1..4] of string [20] */
#endif
extern char difficultyNameB[11][21];    /* [1..11] of string [20]*/
extern char joyButtonNames[5][21];      /* [1..5] of string [20] */
#ifdef TYRIAN2000
extern char superShips[13][26]; 		/* [0..12] of string [25] */
extern char specialName[11][10]; 		/* [1..11] of string [9] */
#else
extern char superShips[11][26];         /* [0..10] of string [25] */
extern char specialName[9][10];         /* [1..9] of string [9] */
#endif
extern char destructHelp[25][22];
extern char weaponNames[17][17];        /* [1..17] of string [16] */
extern char destructModeName[DESTRUCT_MODES][13]; /* [1..destructmodes] of string [12] */
#ifdef TYRIAN2000
extern char shipInfo[20][2][256];
#else
extern char shipInfo[13][2][256];
#endif
extern char menuInt[MAX_MENU+1][11][18]; /* [0..maxmenu, 1..11] of string [17] */
extern const JE_byte menuHelp[MAX_MENU][11];   /* [1..maxmenu, 1..11] */

#ifdef TYRIAN2000
extern char time_pName[4][23];
extern char setupMusic[10][12];
extern char setupMusicHelp[5][60];
extern char setupSound[4][13];
extern char setupSoundHelp[4][52];
extern char setupDetailHelp[5][60];
extern char setupMenu[7][15];
extern char setupMenuHelp[7][64];
extern char setupSoundCard[21][27];
extern char setupDMACard[3][16];
extern char setupDMAHelp[3][41];
extern char mouseSelChoice[6][9];
extern char licInfo[3][46];
extern char licInfoB[39][20];
extern char licInfoC[10][17];
extern char orderInfo[6][31];
extern char lastSection[6][60];
#endif

/*JE_byte temp, temp2;*/

void JE_helpBox( JE_word x, JE_word y, char *message, JE_byte boxwidth );
void JE_HBox( JE_word x, JE_word y, JE_byte messagenum, JE_byte boxwidth );
void JE_loadHelpText( void );

#endif /* HELPTEXT_H */

// kate: tab-width 4; vim: set noet:
