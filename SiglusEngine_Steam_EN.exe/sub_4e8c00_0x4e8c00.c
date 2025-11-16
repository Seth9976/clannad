// 函数: sub_4e8c00
// 地址: 0x4e8c00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_11c
int32_t eax_1 = __security_cookie ^ &var_11c
char* esi = arg3
char** var_10c = arg2
char* var_118 = esi
*arg4 = 0

if (arg2 != 0)
    *arg2 = esi

int32_t ebx = 0
int32_t var_114 = 0

if (*esi != 0)
    void var_100
    void* edi_1 = &var_100
    
    while (true)
        int32_t* eax_2
        eax_2.b = *esi
        
        if (eax_2.b == 0xa)
            break
        
        if (eax_2.b u>= 0x80 && (eax_2.b u< 0xa0 || eax_2.b u> 0xdf) && eax_2.b u< 0xfe)
            break
        
        char* eax_3
        char* esi_3
        
        if (eax_2.b == 0x28)
            var_118 = &esi[1]
            eax_3 = sub_4e8c00(edi_1, 0)
            
            if (eax_3 == 0)
                break
            
            char* esi_2 = var_118
            
            if (*esi_2 != 0x29)
                break
            
            esi_3 = &esi_2[1]
            var_118 = esi_3
        else if (eax_2.b != 0x5c)
            int32_t* edx = &var_118
            char* var_108
            int32_t eax_7 = sub_4e72b0(&var_108, edx, esi, &var_108)
            
            if (eax_7 != 1)
                if (eax_7 != 2)
                    break
                
                eax_3 = var_108
                esi_3 = var_118
                *edi_1 = eax_3
            else
                char* esi_5 = var_108
                int32_t var_104
                int32_t* var_12c_2 = &var_104
                int32_t eax_9 = sub_4e7460(&var_104, edx, var_118, esi_5)
                
                if (eax_9 == 0)
                    break
                
                eax_3 = sub_4e76e0(eax_9, var_104, esi_5, edi_1, &data_704898)
                esi_3 = var_118
        else
            eax_2.b = esi[1]
            int32_t ebx_1
            char* esi_4
            
            if (eax_2.b == 0)
                ebx_1 = 0
                esi_4 = &esi[2]
            else if (eax_2.b != 1)
                if (eax_2.b != 0xa)
                    break
                
                ebx_1 = 2
                esi_4 = &esi[2]
            else
                ebx_1 = 1
                esi_4 = &esi[2]
            
            var_118 = esi_4
            eax_3 = sub_4e8c00(edi_1, 1)
            
            if (eax_3 == 0)
                break
            
            if (ebx_1 != 1)
                esi_3 = var_118
                ebx = var_114
                
                if (ebx_1 == 2)
                    eax_3 = not.d(*edi_1)
                    *edi_1 = eax_3
            else
                ebx = var_114
                eax_3 = neg.d(*edi_1)
                esi_3 = var_118
                *edi_1 = eax_3
        
        if (arg5 == 0)
            *(edi_1 + 4) = 0
            eax_3.b = *esi_3
            
            if (eax_3.b != 0 && eax_3.b != 0xa && eax_3.b == 0x5c)
                eax_3.b = esi_3[1]
                
                if (eax_3.b u<= 0x13)
                    ebx += 1
                    *(edi_1 + 4) = zx.d(eax_3.b)
                    esi = &esi_3[2]
                    edi_1 += 8
                    var_118 = esi
                    var_114 = ebx
                    
                    if (ebx s>= 0x1e)
                        break
                    
                    if (*esi == 0)
                        break
                    
                    continue
        
        if (sub_4e8ae0(eax_3, ebx + 1, &var_100, arg4) == 0)
            break
        
        if (var_10c != 0)
            *var_10c = esi_3
        
        sub_5f02dd(eax_1 ^ &var_11c)
        return 1

sub_5f02dd(eax_1 ^ &var_11c)
return 0
