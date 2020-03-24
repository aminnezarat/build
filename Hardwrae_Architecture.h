/** @file Hardware_Architecture.h
* Definition of enum for Hardware and architecture type of kernel arguments.
*/
#pragma once

namespace ktt
{

	/** @enum ArgumentDataType
	* Enum for hardware type and architecture model for DLNezarat searcher
	*/
	//enum class Hardware_Architecture
	//{
	enum HARDWARE {
		Vega56 = 1,
		TitanV,
		P100,
		Mic5110P,
		K20,
		Gtx2080Ti,
		Gtx1070,
		Gtx750,
		Gtx680
	};
	enum ARCHITECTURE {
		Vega56 = 7, //Radeoon
		TitanV = 5, //Volta
		P100 = 2, //Pascal
		Mic5110P = 6, //XeonPhi
		K20 = 4, //Kepler
		Gtx2080Ti = 3, //Turing
		Gtx1070 = 2, //Pascal
		Gtx750 = 1, //Maxwell
		Gtx680 = 4 //Kepler
	};

} // namespace ktt
