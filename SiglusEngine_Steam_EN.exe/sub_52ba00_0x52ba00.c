// 函数: sub_52ba00
// 地址: 0x52ba00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
arg1.b = 0
sub_57fcf0(arg1, 1)
int32_t ebx = data_1bfdd30

if (ebx == 3 || ebx == 0xca)
    int32_t ecx = *(edi + 0x13b3c)
    
    if (ecx u<= 0x3f)
        *(ecx * 0x2d0 + 0x8fcb14) = 0
        *(ecx * 0x3920 + 0xf8d324) = 2

int32_t esi = *(edi + 0x13b3c)

if (esi u<= 0x3f)
    if (*(esi * 0x3920 + 0xf8d2f0) + *(esi * 0x2d0 + 0x8fcb10) + *(esi * 0x2d0 + &data_8fcadc)
            s> *(esi * 0x3920 + &data_f89b10))
        if (esi u<= 0x3f)
            *(esi * 0x3920 + 0xf8d310) = 1
    else if (esi u<= 0x3f)
        if (*(esi * 0x3920 + 0xf8d31c) != 0)
        label_52baf3:
            
            if ((ebx == 3 || ebx == 0xca) && esi u<= 0x3f && *(esi * 0x3920 + 0xf8d31c) == 0
                    && esi u<= 0x3f && *(esi * 0x3920 + 0xf8d320) == 1 && esi u<= 0x3f)
                *(esi * 0x2d0 + 0x8fcb0c) = *(esi * 0x2d0 + 0x8fcb14)
                sub_57ea10(esi)
            
            int32_t eax_11 = *(edi + 0x13b3c)
            
            if (eax_11 u<= 0x3f)
                *(eax_11 * 0x3920 + 0xf8d31c) = 0
            
            int32_t eax_13 = *(edi + 0x13b3c)
            
            if (eax_13 u<= 0x3f)
                *(eax_13 * 0x3920 + 0xf8d320) = 0
        else if (esi u<= 0x3f)
            if (*(esi * 0x3920 + 0xf8d320) != 0)
                goto label_52baf3
            
            if (esi u<= 0x3f)
                void* ebx_1 = esi * 0x3920
                *(esi * 0x2d0 + 0x8fcb0c) = *(esi * 0x2d0 + 0x8fcb14)
                *(esi * 0x2d0 + 0x8fcb10) += *(ebx_1 + 0xf8d2f0)
                sub_57ea10(esi)
                
                if (data_702fc0 != 0)
                    sub_4200a0(
                        sub_460e20(sub_41bcb0(), 0, ebx_1 + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 
                            0xffffffff, 0), 
                        3, esi, 0, 0, 0)

void* result = *(edi + 0x13b3c)

if (result u<= 0x3f)
    result = result * 0x3920 + &data_f89afc
    *(result + 0x382c) = 0
    *(result + 0x3834) = 0
    *(result + 0x3830) = 0

return result
