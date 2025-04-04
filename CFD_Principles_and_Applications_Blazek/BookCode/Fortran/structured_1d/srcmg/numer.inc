C *****************************************************************************
C
C  Include file for Eul1Dmg with actual numerical parameters
C  valid only for one grid.
C
C *****************************************************************************
C
C  Last update: Dec. 29, 2004
C
C  This program is free software; you can redistribute it and/or
C  modify it under the terms of the GNU General Public License
C  as published by the Free Software Foundation; either version 2
C  of the License, or (at your option) any later version.
C
C  This program is distributed in the hope that it will be useful,
C  but WITHOUT ANY WARRANTY; without even the implied warranty of
C  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
C  GNU General Public License for more details.
C
C  You should have received a copy of the GNU General Public License
C  along with this program; if not, write to the Free Software
C  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
C
C *****************************************************************************
C
      CHARACTER*(1) kdissip

      INTEGER iorder, nrk
      INTEGER ldiss(5), lsmoo(5)

      REAL*8 cfl, epsirs, vis2, vis4, limfac, epsentr
      REAL*8 ark(5), betrk(5)

      COMMON /numerc/ kdissip
      COMMON /numeri/ ldiss,lsmoo,iorder,nrk
      COMMON /numerr/ cfl,epsirs,vis2,vis4,limfac,epsentr,ark,betrk
