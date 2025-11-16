// 函数: sub_437bdc
// 地址: 0x437bdc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = arg2
int32_t edi
int32_t var_10 = edi

if (i != 0)
    uint32_t edi_1 = arg3
    
    do
        int32_t eax_1 = *(i + 4)
        
        if (eax_1 == 1)
            int32_t eax_12 = sub_4377a1(arg1, *(i + 8))
            
            if (edi_1 u>= eax_12)
                i = *(i + 0xc)
                edi_1 -= eax_12
            else
                i = *(i + 8)
        else if (eax_1 == 6)
            i = *(i + 0x18)
        else if (eax_1 == 8)
            i = *(i + 0x10)
            int32_t eax_9 = sub_4377a1(arg1, i)
            
            if (eax_9 == 0)
                break
            
            edi_1 = modu.dp.d(0:edi_1, eax_9)
        else
            if (eax_1 == 9)
                int32_t ecx_3 = *(i + 0x10)
                
                if (ecx_3 == 0 || ecx_3 == 1 || ecx_3 == 2)
                    *(arg4 + 0x10) = 0
                else if (ecx_3 == 3)
                    *(arg4 + 0x10) = 3
                
                *(arg4 + 0x14) = *(i + 0x14)
                *(arg4 + 0x18) = 1
                *(arg4 + 0x1c) = 1
                *(arg4 + 0x20) = *(i + 0x20) & 0x200
                return 0
            
            if (eax_1 != 0xb)
                sub_437200(arg1, nullptr, 0, "internal error: unknown node")
                return 0
            
            i = *(i + 0x20)
    while (i != 0)

return 0x80004005
