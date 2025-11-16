// 函数: sub_477840
// 地址: 0x477840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1
int32_t* esi = data_1cd640c
int32_t ecx = esi[2]

if (ecx != 0xffffffff)
    uint32_t var_420
    eax_1 = sub_41fbc0(ecx, &var_420)
    
    if (eax_1 == 0)
        esi[2] = 0xffffffff
    else
        eax_1 = var_420
        
        if (esi[3] != eax_1)
            int32_t edi_1 = esi[2]
            esi[3] = eax_1
            eax_1 = sub_41fbc0(edi_1, &var_420)
            
            if (eax_1 != 0)
                int32_t* eax_4 = *(*(edi_1 * 0x64 + data_13570f8 + 0x60) + (var_420 << 2))
                char var_214
                sub_4cfd70(&var_214, *eax_4 + eax_4)
                char var_41c[0x208]
                sub_4cfd70(&var_41c, &var_214)
                int32_t ebx = esi[0x80]
                uint32_t edi_2 = esi[0x63]
                int32_t eax_5
                eax_5.b = esi[1] != 0xffffffff
                int32_t eax_7
                
                if (var_214 == 0x3f)
                    sub_476b70(esi)
                    eax_7 = sub_4768e0(esi)
                else
                    uint32_t var_434[0x4]
                    int32_t var_424
                    sub_464530(&var_420, &var_41c, edi_2, ebx, &var_420, &var_424, 1, eax_5, 
                        &var_434)
                    sub_476b70(esi)
                    sub_4768e0(esi)
                    eax_7 = var_424
                    
                    if (eax_7 != 0xffffffff)
                        if (eax_7 != 0xfffffffe)
                            int32_t eax_12 =
                                sub_476f00(&var_214, edi_2, esi, &var_214, ebx, var_420, eax_7)
                            sub_5f02dd(var_8 ^ &__saved_ebp)
                            return eax_12
                        
                        esi[0x64] = var_420
                        int32_t eax_10 = esi[0x5b] + 1
                        esi[0x63] = edi_2
                        esi[0x38] = eax_10
                        sub_5f02dd(var_8 ^ &__saved_ebp)
                        return eax_10
                
                int32_t eax_13 = sub_476f50(eax_7, edi_2, esi, ebx, edi_2)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_13
            
            esi[2] = 0xffffffff

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
