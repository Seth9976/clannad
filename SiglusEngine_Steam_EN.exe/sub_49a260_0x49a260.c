// 函数: sub_49a260
// 地址: 0x49a260
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2
int32_t result = 0
char* edx = arg1
int32_t var_c = eax
char* var_8 = edx
void* edi = &data_8c52b4
void* esi = &data_8c52b8

while (true)
    if (*(esi + 0x24) != 0 && *edi == eax)
        void* ecx = esi
        
        if (esi != 0)
            while (true)
                eax.b = *ecx
                
                if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                    ecx += 2
                    continue
                
                if (eax.b == 0)
                    break
                
                if (eax.b u>= 0x61 && eax.b u<= 0x7a)
                    eax.b -= 0x20
                    *ecx = eax.b
                
                ecx += 1
        
        char* ecx_1 = edx
        
        if (edx != 0)
            while (true)
                eax.b = *ecx_1
                
                if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                    ecx_1 = &ecx_1[2]
                    continue
                
                if (eax.b == 0)
                    break
                
                if (eax.b u>= 0x61 && eax.b u<= 0x7a)
                    eax.b -= 0x20
                    *ecx_1 = eax.b
                
                ecx_1 = &ecx_1[1]
        
        if (sub_4d0f10(esi, edx) == 0)
            *(edi + 0x28) += 1
            return result
        
        edx = var_8
        eax = var_c
    
    result += 1
    edi += 0x2c
    esi += 0x2c
    
    if (result s>= 0x400)
        break

return 0xffffffff
