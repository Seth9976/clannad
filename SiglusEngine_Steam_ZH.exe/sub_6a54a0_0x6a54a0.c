// 函数: sub_6a54a0
// 地址: 0x6a54a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = __chkstk(0x123c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t result = ecx[4]
int32_t* var_1240 = ecx
int32_t var_10 = arg1

if (result == 0xffffffff)
    void* ebx = data_bac510
    int32_t i = 0
    int32_t edi = arg1 | result
    
    if (*(ebx + 0x10b8c) s> 0)
        void* ebx_1 = ebx
        
        do
            void var_123c
            char eax_4 = sub_6a50c0(ecx, *(ebx_1 + 0x10b88) + i, &var_123c)
            ebx_1 = data_bac510
            
            if (eax_4 != 0)
                char eax_8
                
                if (edi != 0xffffffff)
                    eax_8 = sub_650590(*(*var_1240 + (*(ebx_1 + 0x10b88) + edi) * 0xc), &var_123c)
                
                if (edi == 0xffffffff || eax_8 != 0)
                    edi = i
            
            ecx = var_1240
            i += 1
        while (i s< *(ebx_1 + 0x10b8c))
    
    ecx[4] = edi
    result = edi

int32_t entry_ebx
sub_745f2b(entry_ebx ^ &__saved_ebp)
return result
