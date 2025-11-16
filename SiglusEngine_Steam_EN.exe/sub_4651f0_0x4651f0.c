// 函数: sub_4651f0
// 地址: 0x4651f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1
int32_t* esi = data_1cd6408
void* edi = data_1cd6404
int32_t ecx = esi[2]

if (ecx != 0xffffffff)
    uint32_t var_420
    eax_1 = sub_41fbc0(ecx, &var_420)
    
    if (eax_1 == 0)
        esi[2] = 0xffffffff
    else
        eax_1 = var_420
        
        if (esi[3] != eax_1)
            int32_t ebx_1 = esi[2]
            esi[3] = eax_1
            eax_1 = sub_41fbc0(ebx_1, &var_420)
            
            if (eax_1 != 0)
                int32_t* eax_4 = *(*(ebx_1 * 0x64 + data_13570f8 + 0x60) + (var_420 << 2))
                char var_214
                sub_4cfd70(&var_214, *eax_4 + eax_4)
                char var_41c[0x208]
                sub_4cfd70(&var_41c, &var_214)
                int32_t eax_5 = *(edi + 0x7c)
                uint32_t ebx_2 = *(edi + 8)
                int32_t ecx_6
                ecx_6.b = esi[1] != 0xffffffff
                
                if (var_214 != 0x3f)
                    void var_438
                    int32_t var_428
                    sub_464530(eax_5, &var_41c, ebx_2, eax_5, &var_420, &var_428, 0, ecx_6, 
                        &var_438)
                    sub_4636d0(edi, esi)
                    sub_4632c0(edi, esi)
                    int32_t eax_9 = var_428
                    
                    if (eax_9 != 0xffffffff)
                        if (eax_9 == 0xfffffffe)
                            *(edi + 0xc) = var_420
                            *(edi + 8) = ebx_2
                            int32_t eax_12 = esi[0xe0] + 1
                            esi[0xbd] = eax_12
                            sub_5f02dd(var_8 ^ &__saved_ebp)
                            return eax_12
                        
                        if (eax_9 != 0xfffffffd)
                            int32_t eax_18 = sub_464800(&var_214, esi, edi, ebx_2, &var_214, eax_5, 
                                var_420, eax_9)
                            sub_5f02dd(var_8 ^ &__saved_ebp)
                            return eax_18
                        
                        int32_t eax_15 = sub_464850(&var_214, esi, edi, ebx_2, &var_214, eax_5, 
                            var_420, &var_438)
                        sub_5f02dd(var_8 ^ &__saved_ebp)
                        return eax_15
                else
                    sub_4636d0(edi, esi)
                    sub_4632c0(edi, esi)
                
                *(edi + 8) = ebx_2
                
                if (ebx_2 == 0)
                    ebx_2 = 1
                
                *(edi + 0x7c) = eax_5
                *(edi + 0xc) = ebx_2
                int32_t eax_8 = esi[0xe0] + 1
                esi[0xbd] = eax_8
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_8
            
            esi[2] = 0xffffffff

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
