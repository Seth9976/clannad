// 函数: sub_46e543
// 地址: 0x46e543
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* esi = arg2
int32_t edi
int32_t var_10 = edi
int32_t i = 0
int32_t* var_8_1 = arg1

if (esi == 0)
    return 0

int32_t eax_1 = *(esi + 4)
int32_t result = 0

if (eax_1 == 1)
    while (*(esi + 4) == 1)
        int32_t eax_16 = sub_46e543(*(esi + 8), arg3 + (result << 2))
        esi = *(esi + 0xc)
        result += eax_16
        
        if (esi == 0)
            break
    
    if (esi != 0)
        return result + sub_46e543(esi, arg3 + (result << 2))
else
    if (eax_1 == 6)
        return sub_46e543(*(esi + 0x18), arg3)
    
    if (eax_1 == 8)
        if (*(esi + 0x14) u> 0)
            do
                result += sub_46e543(*(esi + 0x10), arg3 + (result << 2))
                i += 1
            while (i u< *(esi + 0x14))
    else if (eax_1 == 9)
        result = *(esi + 0x1c) * *(esi + 0x18)
        void* eax_10 = nullptr
        
        switch (*(esi + 0x14))
            case 0
                eax_10 = 0x17
            case 1, 5
                eax_10 = 2
            case 2, 6
                eax_10 = &data_2000002
            case 3, 7
                eax_10 = &data_4000002
            case 4, 8
                eax_10 = 0x8000002
            case 0xa
                eax_10 = &data_2000000
            case 0xb
                eax_10 = &data_4000000
            case 0xc
                eax_10 = 0x8000000
        
        if ((arg1[5].b & 0x20) != 0)
            eax_10 = (eax_10 & 0xf3ffffff) | &data_2000000
        
        int32_t ecx_2
        int32_t edi_2
        
        if (result u> 0)
            edi_2, ecx_2 = __memfill_u32(arg3, eax_10, result)
    else
        if (eax_1 == 0xb)
            return sub_46e543(*(esi + 0x20), arg3)
        
        sub_46e3d1(arg1, nullptr, 0, "internal error: unknown node")

return result
