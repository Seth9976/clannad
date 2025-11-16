// 函数: sub_6691d0
// 地址: 0x6691d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_34
int32_t eax_1 = __security_cookie ^ &var_34
sub_664770()
void* edi = &data_b900e0
void* i = data_b900e4

while (i != 0)
    if (*edi == 0 && *(edi + 0xc) == arg2)
        int128_t* const edx_1 = &data_aac1b0
        int32_t esi_1 = 0xc
        
        while (true)
            if (*i != *edx_1)
                goto label_669286
            
            i += 4
            edx_1 += 4
            int32_t temp1_1 = esi_1
            esi_1 -= 4
            
            if (temp1_1 u< 4)
                void* esi_2 = *(edi + 0x18)
                
                if (esi_2 != 0)
                label_66926d:
                    HRESULT result = sub_6694a0(esi_2, arg4, arg5, *(edi + 0x10), *(edi + 0x14))
                    sub_745f2b(eax_1 ^ &var_34)
                    return result
                
                void var_24
                esi_2 = &var_24
                
                if ((*(*arg1 + 0x1c))(&data_aac1b0, arg2, arg3, &var_24) s>= 0)
                    goto label_66926d
                
                break
        
        break
    
label_669286:
    i = *(edi + 0x24)
    edi += 0x20

sub_745f2b(eax_1 ^ &var_34)
return 0
