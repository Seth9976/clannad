// 函数: _ProcessCodePage
// 地址: 0x7543d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = arg1
uint32_t eax_1

if (esi != 0 && *esi != 0)
    eax_1 = _wcscmp(esi, &data_aafadc)

if (esi == 0 || *esi == 0 || eax_1 == 0)
    if (sub_75521f(arg2 + 0x250, 0x20001004, &arg1, 2) != 0)
        int32_t eax_6 = arg1
        
        if (eax_6 == 0)
            return GetACP() __tailcall
        
        return eax_6
else
    if (_wcscmp(esi, &data_aafae4) != 0)
        return __sanitizer::internal_atoll(esi)
    
    if (sub_75521f(arg2 + 0x250, 0x2000000b, &arg1, 2) != 0)
        return arg1

return 0
