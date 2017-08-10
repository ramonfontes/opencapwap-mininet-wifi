/*******************************************************************************************
 * Copyright (c) 2006-2009 Laboratorio di Sistemi di Elaborazione e Bioingegneria          *
 *                         Informatica Universita' Campus BioMedico - Italy                *
 *                                                                                         *
 * This program is free software; you can redistribute it and/or modify it under the terms *
 * of the GNU General Public License as published by the Free Software Foundation; either  *
 * version 2 of the License, or (at your option) any later version.                        *
 *                                                                                         *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY         *
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 	   *
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.                *
 *                                                                                         *
 * You should have received a copy of the GNU General Public License along with this       *
 * program; if not, write to the:                                                          *
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,                    *
 * MA  02111-1307, USA.                                                                    *
 *                                                                                         *
 * In addition, as a special exception, the copyright holders give permission to link the  *
 * code of portions of this program with the OpenSSL library under certain conditions as   *
 * described in each individual source file, and distribute linked combinations including  * 
 * the two. You must obey the GNU General Public License in all respects for all of the    *
 * code used other than OpenSSL.  If you modify file(s) with this exception, you may       *
 * extend this exception to your version of the file(s), but you are not obligated to do   *
 * so.  If you do not wish to do so, delete this exception statement from your version.    *
 * If you delete this exception statement from all source files in the program, then also  *
 * delete it here.                                                                         *
 *											   *
 * --------------------------------------------------------------------------------------- *
 * Project:  Capwap                                                                        *
 *                                                                                         *
 * Authors : Ludovico Rossi (ludo@bluepixysw.com)                                          *  
 *           Del Moro Andrea (andrea_delmoro@libero.it)                                    *
 *           Giovannini Federica (giovannini.federica@gmail.com)                           *
 *           Massimo Vellucci (m.vellucci@unicampus.it)                                    *
 *           Mauro Bisson (mauro.bis@gmail.com)                                            *
 *	         Daniele De Sanctis (danieledesanctis@gmail.com)                           *
 *	         Antonio Davoli (antonio.davoli@gmail.com)                                 *
 *		 Donato Capitella (d.capitella@gmail.com)				   *
 *******************************************************************************************/

#ifndef __CAPWAP_ACInterface_HEADER__
#define __CAPWAP_ACInterface_HEADER__

//No Interface Command
#define	NO_CMD			0
//Manual setting for QoS values
#define QOS_CMD			1
#define CLEAR_CONFIG_MSG_CMD	2
/* 2009 Update: Manual setting for OFDM values*/
#define OFDM_CONTROL_CMD        3
/*Update 2009: 
		Manage UCI configuration command*/
#define UCI_CONTROL_CMD 4
/* Manage WTP Update Command */
#define WTP_UPDATE_CMD	5
//Elena Agostini - 09/2014: IEEE WLAN configuration command
#define IEEE_WLAN_CONFIGURATION_CMD 6

#endif
