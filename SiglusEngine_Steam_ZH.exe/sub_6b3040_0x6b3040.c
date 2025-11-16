// 函数: sub_6b3040
// 地址: 0x6b3040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &std::stringbuf::`vftable'{for `std::streambuf'}
int32_t* result = sub_6b3680(arg1)
*arg1 = &std::streambuf::`vftable'
int32_t* esi_1 = arg1[0xd]

if (esi_1 == 0)
    return result

int32_t* ecx = *esi_1

if (ecx != 0)
    int32_t* eax_1 = (*(*ecx + 8))()
    
    if (eax_1 != 0)
        (**eax_1)(1)

return j__free(esi_1)
