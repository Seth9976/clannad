// 函数: sub_57f190
// 地址: 0x57f190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* result = &data_8fcb48
int32_t var_21c = 0
void* result_1 = &data_8fcb48
void* var_224 = &data_f8d35c
void* var_218 = &data_8fcb48

do
    void* result_2 = result
    
    for (int32_t j = 0; j s< 8; )
        if (*result_2 != 0)
            void* result_3 = result_2
            void var_214
            void* edx_1 = &var_214
            
            do
                char ecx = *result_3
                
                if (ecx u< 0x80)
                label_57f216:
                    *edx_1 = ecx
                    edx_1 += 1
                    result_3 += 1
                else
                    if (ecx u< 0xa0)
                        if (ecx u>= 0xfe)
                            goto label_57f216
                    else if (ecx u<= 0xdf || ecx u>= 0xfe)
                        goto label_57f216
                    
                    *edx_1 = ecx
                    *(edx_1 + 1) = *(result_3 + 1)
                    edx_1 += 2
                    result_3 += 2
            while (*result_3 != 0)
            
            int32_t var_240_1 = *(result_2 + 0x24)
            *edx_1 = 0
            sub_57ef70(&var_214, j, var_21c, &var_214, var_240_1, 1, 0)
        
        j += 1
        result_2 += 0x40
    
    if (var_21c u<= 0x3f)
        int32_t ecx_2 = 0
        void* eax_3 = var_218
        
        while (true)
            if (*eax_3 != 0)
                if (*(var_224 + 0x20) == 0)
                    eax_3 = sub_4d6960(eax_3, var_224 + 0x20, var_224 + 0x1c, 0x200, "MSGST_FACE")
                
                sub_4d1c30(eax_3, var_218, *(var_224 + 0x20), 0x200)
                break
            
            ecx_2 += 1
            eax_3 += 0x40
            
            if (ecx_2 s>= 8)
                if (*(var_224 + 0x1c) != 0)
                    int32_t edi_3 = data_1af413c
                    
                    if (edi_3 == 0)
                    label_57f2ae:
                        HGLOBAL hMem = *(var_224 + 0x1c)
                        
                        if (hMem != 0)
                            GlobalUnlock(hMem)
                            GlobalFree(*(var_224 + 0x1c))
                            *(var_224 + 0x1c) = 0
                        
                        goto label_57f2cc
                    
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (*(var_224 + 0x1c) == 0)
                    label_57f2cc:
                        *(var_224 + 0x20) = 0
                        
                        if (edi_3 != 0)
                            sub_4d6500()
                            ReleaseSemaphore(data_7027a8, 1, nullptr)
                    else if (sub_4d6b80(var_224 + 0x1c) != 0)
                        goto label_57f2ae
                else
                    *(var_224 + 0x20) = 0
                
                break
    
    arg1 = var_218 + 0x2d0
    var_21c += 1
    result = result_1 + 0x2d0
    result_1 = result
    var_218 = arg1
    var_224 += 0x3920
while (arg1 s< 0x907f48)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
