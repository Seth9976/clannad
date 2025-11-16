// 函数: sub_754bee
// 地址: 0x754bee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = arg1
uint32_t eax_1

if (esi != 0 && *esi != 0)
    eax_1 = _wcscmp(esi, &data_aafadc)

if (esi == 0 || *esi == 0 || eax_1 == 0)
    if (GetLocaleInfoW(*(arg2 + 8), 0x20001004, &arg1, 2) != 0)
        int32_t eax_5 = arg1
        
        if (eax_5 == 0)
            return GetACP() __tailcall
        
        return eax_5
else
    if (_wcscmp(esi, &data_aafae4) != 0)
        return __sanitizer::internal_atoll(esi)
    
    if (GetLocaleInfoW(*(arg2 + 8), 0x2000000b, &arg1, 2) != 0)
        return arg1

return 0
