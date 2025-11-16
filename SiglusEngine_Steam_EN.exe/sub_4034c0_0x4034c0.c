// 函数: sub_4034c0
// 地址: 0x4034c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t ecx
int32_t edx
eax, ecx, edx = sub_410bd0(arg2, 0x20)

if (eax s>= 0)
    char* eax_2 = sub_5f1ac0(eax + 1, edx, ecx, eax + 1, 1)
    arg1[3] = eax_2
    sub_4033b0(arg2, eax_2, eax)
    int32_t eax_3
    int32_t ecx_1
    int32_t edx_1
    eax_3, ecx_1, edx_1 = sub_410bd0(arg2, 0x20)
    arg1[2] = eax_3
    
    if (eax_3 s>= 0)
        int32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_5f1ac0(eax_3 + 1, edx_1, ecx_1, eax_3 + 1, 4)
        int32_t ecx_3 = arg1[2] + 1
        *arg1 = eax_5
        arg1[1] = sub_5f1ac0(eax_5, edx_2, ecx_3, ecx_3, 4)
        int32_t i = 0
        
        if (arg1[2] s> 0)
            do
                int32_t eax_8
                int32_t ecx_4
                eax_8, ecx_4 = sub_410bd0(arg2, 0x20)
                
                if (eax_8 s< 0)
                    goto label_40357f
                
                int32_t edx_3 = arg1[1]
                *(edx_3 + (i << 2)) = eax_8
                *(*arg1 + (i << 2)) = sub_5f1ac0(eax_8 + 1, edx_3, ecx_4, eax_8 + 1, 1)
                sub_4033b0(arg2, *(*arg1 + (i << 2)), eax_8)
                i += 1
            while (i s< arg1[2])
        
        if (sub_410bd0(arg2, 1) == 1)
            return 0

label_40357f:
sub_403080(arg1)
return 0xffffff7b
