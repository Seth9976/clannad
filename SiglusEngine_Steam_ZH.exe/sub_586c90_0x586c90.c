// 函数: sub_586c90
// 地址: 0x586c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = arg2
void* ecx
WPARAM edx

if (arg4 == 0)
    result -= 0x47e
    
    if (result u<= 0xe6)
        result = zx.d(lookup_table_586dbc[result])
        
        switch (result)
            case 0
                return sub_587240(result, edx, ecx, arg1)
            case 1
                return sub_587120(result, edx, ecx, arg1)
            case 2
                return sub_5875a0(result, edx, ecx, arg1)
            case 3
                return sub_587360(result, edx, ecx, arg1)
            case 4
                return sub_587480(result, edx, ecx, arg1)
else if (result s> 0x4b1)
    if (result == 0x50b)
        return sub_587630(result - 0x50b, edx, ecx, arg1)
    
    int32_t eax_6 = result - 0x51f
    
    if (result == 0x51f)
        return sub_5873f0(eax_6, edx, ecx, arg1)
    
    result = eax_6 - 0x46
    
    if (eax_6 == 0x46)
        return sub_587510(result, edx, ecx, arg1)
else
    if (result == 0x4b1)
        return sub_5871b0(result, edx, ecx, arg1)
    
    if (result == 0x15)
        return sub_587070(result, edx, ecx, arg1)
    
    if (result == 0xb)
        return sub_586eb0(result, edx, ecx, arg1, arg3)
    
    if (result == 0x10)
        return sub_586fd0(result, edx, ecx, arg1)
    
    if (result == 0x47f)
        return sub_5872d0(result, edx, ecx, arg1)
return result
