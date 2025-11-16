// 函数: sub_4c0b9c
// 地址: 0x4c0b9c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
int32_t edi_1 = 0
int32_t var_8_1 = 0

if (arg5 == 0)
    if ((*(*(*(arg1 + 0x14) + (*arg2 << 2)) + 0x3d) & 2) != 0)
        var_8_1 = 0x100000
    
    if (arg3 u> 0)
        do
            int32_t eax_7 = *(*(*(arg1 + 0x14) + (arg2[edi_1] << 2)) + 0x10)
            int32_t ebx_1 = 0
            
            if (eax_7 == 0)
                ebx_1 = 0x10000
            else if (eax_7 == 1)
                ebx_1 = 0x20000
            else if (eax_7 == 2)
                ebx_1 = 0x40000
            else if (eax_7 == 3)
                ebx_1 = 0x80000
            
            if ((var_8_1 & ebx_1) != 0)
                sub_4a4100(arg1, *(*(arg1 + 0x100) + 0x3c), 0x12d5, 
                    "internal error: overlapping output writes")
            
            var_8_1 |= ebx_1
            edi_1 += 1
        while (edi_1 u< arg3)
else
    var_8_1 = 0xf0000

bool cond:1_1

if (((*(arg1 + 0xcc)).b & 0x20) == 0)
    int32_t ecx_2 = 0
    cond:1_1 = 0 != arg3
    
    if (0 u< arg3)
        do
            void* eax_17 = *(*(arg1 + 0x14) + (arg2[ecx_2] << 2))
            
            if ((*(eax_17 + 3) & 2) == 0)
                if ((*(*(*(arg1 + 0x10) + (*(eax_17 + 4) << 2)) + 4) & 1) == 0)
                    break
                
                if (*(eax_17 + 0x48) == 0xffffffff)
                    break
                
                if (*(eax_17 + 0x54) != 0xffffffff)
                    break
            
            ecx_2 += 1
        while (ecx_2 u< arg3)
        
        cond:1_1 = ecx_2 != arg3

if (((*(arg1 + 0xcc)).b & 0x20) != 0 || not(cond:1_1))
    var_8_1:2.b |= 0x20

if ((*(arg1 + 0xcc) & 1) != 0)
    int32_t ecx_3 = 0
    
    if (*(arg1 + 0x124) != 0 && arg3 u> 0)
        do
            int32_t edi_4 = arg2[ecx_3]
            int32_t eax_20 = ecx_3 + *(arg1 + 0x128) * 6
            ecx_3 += 1
            *(*(arg1 + 0x124) + (eax_20 << 2) - 0x10) = edi_4
        while (ecx_3 u< arg3)

*arg4 = var_8_1
return 0
