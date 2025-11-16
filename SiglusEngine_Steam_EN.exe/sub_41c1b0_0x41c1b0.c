// 函数: sub_41c1b0
// 地址: 0x41c1b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_418 = 0
BOOL var_40c = 0
int32_t eax_4 = sub_4c4810(&var_40c, &var_418, "flag.ini", &var_40c, "AVG_FLAGINI", 0xa, 0xffffffff)

if (var_418 == 0)
    eax_4 = sub_4c4810(&var_40c, &var_418, "flag.ini", &var_40c, "AVG_FLAGINI", 2, 0xffffffff)
    
    if (var_418 == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

char* esi = var_40c
int32_t var_414 = 0
void* var_410 = nullptr
void* ebx = nullptr
void* var_420 = 0x800
sub_4d6960(eax_4, &var_410, &var_414, 0x800, "GAMEEXEINI_ERASE_COMMENT")
void* edx_3 = var_410
int32_t edi = 1
int32_t var_424 = 0
BOOL ecx_3 = 0x200

while (true)
    var_40c = ecx_3
    
    while (true)
        if (ecx_3 s>= var_420)
            void* eax_7 = var_420 + 0x800
            var_420 = eax_7
            sub_4d6ae0(eax_7, &var_410, &var_414, eax_7)
            ecx_3 = var_40c
            edx_3 = ebx + var_410
        
        void* eax_8
        eax_8.b = *esi
        
        if (eax_8.b == 0)
            *edx_3 = 0
            ebx += 1
        else
            if (eax_8.b u>= 0x80 && (eax_8.b u< 0xa0 || eax_8.b u> 0xdf) && eax_8.b u< 0xfe)
                *edx_3 = eax_8.b
                ebx += 2
                eax_8.b = esi[1]
                esi = &esi[2]
                *(edx_3 + 1) = eax_8.b
                edx_3 += 2
                ecx_3 += 2
                break
            
            if (eax_8.b == 0xd && esi[1] == 0xa)
                *edx_3 = eax_8.b
                ebx += 2
                ecx_3 = var_40c + 2
                eax_8.b = esi[1]
                esi = &esi[2]
                *(edx_3 + 1) = eax_8.b
                edx_3 += 2
                edi += 1
                break
            
            if (eax_8.b == 0xa)
                BOOL ecx_6 = var_40c
                esi = &esi[1]
                *edx_3 = eax_8.b
                ebx += 1
                edx_3 += 1
                ecx_3 = ecx_6 + 1
                edi += 1
                break
            
            if (eax_8.b == 0x3b)
                eax_8.b = esi[1]
                esi = &esi[1]
                ecx_3 = var_40c
                
                if (eax_8.b == 0)
                    continue
                else
                    while (true)
                        if (eax_8.b u< 0x80)
                        label_41c38d:
                            
                            if (eax_8.b == 0xd)
                                ecx_3 = var_40c
                                
                                if (esi[1] == 0xa)
                                    break
                            
                            ecx_3 = var_40c
                            
                            if (eax_8.b == 0xa)
                                break
                            
                            esi = &esi[1]
                        else if (eax_8.b u< 0xa0)
                            if (eax_8.b u>= 0xfe)
                                goto label_41c38d
                            
                            esi = &esi[2]
                        else
                            if (eax_8.b u<= 0xdf || eax_8.b u>= 0xfe)
                                goto label_41c38d
                            
                            esi = &esi[2]
                        
                        eax_8.b = *esi
                        
                        if (eax_8.b == 0)
                            ecx_3 = var_40c
                            break
                    
                    continue
            else if (eax_8.b != 0x2f)
            label_41c4b3:
                
                if (eax_8.b == 0x20 || eax_8.b == 9)
                    ecx_3 = var_40c
                    esi = &esi[1]
                    continue
                
                BOOL ecx_8 = var_40c
                esi = &esi[1]
                *edx_3 = eax_8.b
                ebx += 1
                edx_3 += 1
                ecx_3 = ecx_8 + 1
                break
            else
                ecx_3.b = esi[1]
                
                if (ecx_3.b != eax_8.b)
                    if (ecx_3.b != 0x2a)
                        goto label_41c4b3
                    
                    eax_8.b = esi[2]
                    void* esi_2 = &esi[2]
                    int32_t ecx_7 = edi
                    
                    if (eax_8.b == 0)
                    label_41c47e:
                        int32_t var_43c_3 = ecx_7
                        void var_408
                        sub_4c84d0(&var_408, &data_613bd8)
                        var_424 = 1
                    else
                        while (true)
                            if (eax_8.b u< 0x80)
                            label_41c455:
                                
                                if (eax_8.b == 0xd && *(esi_2 + 1) == 0xa)
                                    esi_2 += 2
                                    edi += 1
                                else if (eax_8.b != 0xa)
                                    if (eax_8.b == 0x2a && *(esi_2 + 1) == 0x2f)
                                        ecx_3 = var_40c
                                        esi = esi_2 + 2
                                        break
                                    
                                    esi_2 += 1
                                else
                                    esi_2 += 1
                                    edi += 1
                            else if (eax_8.b u< 0xa0)
                                if (eax_8.b u>= 0xfe)
                                    goto label_41c455
                                
                                esi_2 += 2
                            else
                                if (eax_8.b u<= 0xdf || eax_8.b u>= 0xfe)
                                    goto label_41c455
                                
                                esi_2 += 2
                            
                            eax_8.b = *esi_2
                            
                            if (eax_8.b == 0)
                                goto label_41c47e
                        
                        continue
                else
                    eax_8.b = esi[2]
                    esi = &esi[2]
                    ecx_3 = var_40c
                    
                    if (eax_8.b == 0)
                        continue
                    else
                        while (true)
                            if (eax_8.b u< 0x80)
                            label_41c3f9:
                                
                                if (eax_8.b == 0xd)
                                    ecx_3 = var_40c
                                    
                                    if (esi[1] == 0xa)
                                        break
                                
                                ecx_3 = var_40c
                                
                                if (eax_8.b == 0xa)
                                    break
                                
                                esi = &esi[1]
                            else if (eax_8.b u< 0xa0)
                                if (eax_8.b u>= 0xfe)
                                    goto label_41c3f9
                                
                                esi = &esi[2]
                            else
                                if (eax_8.b u<= 0xdf || eax_8.b u>= 0xfe)
                                    goto label_41c3f9
                                
                                esi = &esi[2]
                            
                            eax_8.b = *esi
                            
                            if (eax_8.b == 0)
                                ecx_3 = var_40c
                                break
                        
                        continue
        
        int32_t eax_9 = sub_4d6c40(&var_418, &var_40c)
        void** edx_6 = &var_410
        int32_t* ecx_10 = &var_414
        
        if (var_424 != 0 || ebx == 0)
            sub_4d6c40(ecx_10, edx_6)
            *arg4 = nullptr
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        sub_4d6ae0(eax_9, edx_6, ecx_10, ebx)
        *arg3 = var_414
        *arg2 = var_410
        *arg4 = ebx
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1
