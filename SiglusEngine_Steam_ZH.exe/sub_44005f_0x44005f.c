// 函数: sub_44005f
// 地址: 0x44005f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t entry_ebx
void*** eax_1 = sub_46baac(arg1, 0x100, entry_ebx, __return_addr)
void*** result = sub_437268(arg3, eax_1)

if (*(arg3 + 0x44) == 0)
    result = *(arg3 + 0xc)
    
    if (result == 0)
        void*** eax = sub_42cfa1(0x14)
        
        if (eax == 0)
            result = nullptr
        else
            result = sub_46b602(eax, eax_1, *(arg3 + 8), "Stack")
        
        if (result != 0)
            *(arg3 + 8) = result
        else
            result = sub_437200(arg3, nullptr, 0, "internal error: out of memory")
    else
        *(arg3 + 0xc) = result[3]
        result[2] = eax_1
        result[3] = *(arg3 + 8)
        *(arg3 + 8) = result

*arg2
return result
