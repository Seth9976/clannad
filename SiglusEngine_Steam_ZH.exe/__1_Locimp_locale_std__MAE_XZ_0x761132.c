// 函数: ??1_Locimp@locale@std@@MAE@XZ
// 地址: 0x761132
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &std::locale::_Locimp::`vftable'{for `std::locale::facet'}
int32_t result = std::locale::_Locimp::_Locimp_dtor(arg1)

if (arg1[6] != 0)
    result = _free(arg1[6])

arg1[6] = 0
*arg1 = &std::_Facet_base::`vftable'
return result
