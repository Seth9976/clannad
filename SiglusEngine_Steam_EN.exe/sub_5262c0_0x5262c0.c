// 函数: sub_5262c0
// 地址: 0x5262c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg2
void* var_8 = esi
void* ebx = 0xfffffffe
int32_t var_28 = 0
int32_t edi
int32_t var_44 = edi
arg1.b = *esi
void* result = 0xffffffff
void* var_20 = 0xfffffffe
int32_t var_24
void* var_18
void* var_c

if (arg1.b u< 0x80)
    if (arg1.b == 0xa || arg1.b != 0x28)
        arg1 = arg5
        var_18 = arg1
    else
    label_52630c:
        arg1.b = esi[1]
        void* esi_1 = &esi[1]
        
        if (arg1.b == 0x29)
            arg1 = arg5
            esi = esi_1 + 1
            var_18 = arg1
            var_8 = esi
        else
            var_18 = arg5
            
            do
                esi_1 += 1
                
                if (arg1.b != 0x2c)
                    var_8 = esi_1
                    
                    if (arg1.b == 0x28)
                        sub_4e90f0(&var_24, &var_8, esi_1, &var_24)
                        void* esi_2 = var_8
                        esi_1 = esi_2 + 2
                        arg1 = zx.d(*(esi_2 + 1)) - 0x30
                        var_8 = esi_1
                        
                        if (arg1 != 4)
                            int32_t edi_2 = var_24
                            void* result_1 = result
                            
                            if (edi_2 != 0)
                                result_1 = arg1
                            
                            result = result_1
                            
                            if (arg1 == 0 || arg1 == 1)
                                sub_4e8c00(&var_c, &var_8, esi_1, &var_c, 0)
                                esi_1 = var_8
                                
                                if (edi_2 != 0)
                                    var_18 = var_c
                        else
                            sub_4e8c00(&var_c, &var_8, esi_1, &var_c, 0)
                            arg1 = var_c
                            
                            if (arg1 s< 0 || arg1 s>= 0x20)
                                arg1 = 0xffffffff
                                var_c = 0xffffffff
                            
                            var_28 = 1
                            
                            if (var_24 != 0)
                                ebx = arg1
                            
                            esi_1 = var_8
                    else if (zx.d(arg1.b) != 0x34)
                        result = zx.d(arg1.b) - 0x30
                        
                        if (zx.d(arg1.b) == 0x30 || zx.d(arg1.b) == 0x31)
                            sub_4e8c00(&var_c, &var_8, esi_1, &var_c, 0)
                            var_18 = var_c
                            esi_1 = var_8
                    else
                        sub_4e8c00(&var_c, &var_8, esi_1, &var_c, 0)
                        ebx = var_c
                        
                        if (ebx s< 0 || ebx s>= 0x20)
                            ebx = 0xffffffff
                            var_c = 0xffffffff
                        
                        var_28 = 1
                        esi_1 = var_8
                
                arg1.b = *esi_1
            while (arg1.b != 0x29)
            
            esi = esi_1 + 1
            var_20 = ebx
            var_8 = esi
else if (arg1.b u< 0xa0)
    if (arg1.b u>= 0xfe && arg1.b != 0xa && arg1.b == 0x28)
        goto label_52630c
    
    arg1 = arg5
    var_18 = arg1
else
    if ((arg1.b u<= 0xdf || arg1.b u>= 0xfe) && arg1.b != 0xa && arg1.b == 0x28)
        goto label_52630c
    
    arg1 = arg5
    var_18 = arg1

var_24 = 0
char* var_14 = nullptr
void* var_1c = 0x1000
sub_4d6960(arg1, &var_14, &var_24, 0x1000, "AVG_SELMESS_TMP")
char* edi_3 = var_14
void* ebx_1 = nullptr
void* ecx_9 = 0x1000
void* eax_7

while (true)
    eax_7 = ebx_1 + 0x800
    var_c = ebx_1
    void* var_2c_1 = eax_7
    
    if (eax_7 s> ecx_9)
        char* edi_4 = ebx_1 + esi
        void* ebx_2 = eax_7
        void* edi_5 = var_1c
        
        do
            edi_5 += 0x1000
            eax_7 = sub_4d6ae0(eax_7, &var_14, &var_24, edi_5)
        while (edi_5 s< ebx_2)
        
        ebx_1 = var_c
        var_1c = edi_5
        edi_3 = edi_4
        ecx_9 = var_1c
    
    eax_7.b = *esi
    
    if (eax_7.b u>= 0x80 && (eax_7.b u< 0xa0 || eax_7.b u> 0xdf) && eax_7.b u< 0xfe)
        *edi_3 = eax_7.b
        ebx_1 += 2
        eax_7.b = esi[1]
        edi_3[1] = eax_7.b
        edi_3 = &edi_3[2]
        esi = &esi[2]
        var_8 = esi
        continue
    
    if (eax_7.b == 0xa)
        void* result_2 = result
        *edi_3 = 0
        *arg8 = zx.d(*(esi + 1))
        int32_t edi_6
        
        if (ebx_1 + 1 s<= 1)
            if (result_2 == 0xffffffff)
                result_2 = 3
            
            edi_6 = 0
            result = result_2
        else
            edi_6 = *arg7
            *arg7 = edi_6 + 1
            
            if (result_2 == 0xffffffff)
                result_2 = nullptr
                result = result_2
        
        if (arg11 != 0)
            int32_t ecx_15 = *(arg3 + 4)
            
            if (ecx_15 != 0)
                void* eax_12 = arg6 * 0x2c + ecx_15
                arg11.d = eax_12
                *(eax_12 + 0x10) = var_18
                *(eax_12 + 0x1c) = edi_6
                *(eax_12 + 0x14) = result_2
                *(eax_12 + 0x18) = var_20
                *(eax_12 + 0x28) = 0
                
                if (ebx_1 + 1 s> 1)
                    if (arg10 == 0)
                        sub_4d1c30(
                            sub_4d6960(eax_12, eax_12 + 0x24, eax_12 + 0x20, ebx_1 + 1, "SEL_STR"), 
                            var_14, *(eax_12 + 0x24), ebx_1 + 1)
                        *(arg11.d + 0x28) = ebx_1 + 1
                    else
                        sub_4ebec0(eax_12, eax_12 + 0x24, eax_12 + 0x20, var_14)
                        void* ecx_19 = *(eax_12 + 0x24)
                        
                        if (ecx_19 != 0)
                            *(arg11.d + 0x28) = sub_4a5770(ecx_19)
        
        *arg4 = &esi[3]
        sub_4d6c40(&var_24, &var_14)
        
        if (arg9 != 0)
            *arg9 = var_28
        
        return result
    
    if (eax_7.b == 0x23 && esi[1] == eax_7.b && esi[2] == eax_7.b && esi[3] == 0x50
            && esi[4] == 0x52 && esi[5] == 0x49 && esi[6] == 0x4e && esi[7] == 0x54
            && esi[8] == 0x28)
        void* i_2 = sub_526250(esi, &var_8)
        
        if (i_2 s> 0)
            void* esi_3 = esi - edi_3
            void* i_1 = i_2
            void* i
            
            do
                void* eax_8
                eax_8.b = *(esi_3 + edi_3)
                *edi_3 = eax_8.b
                edi_3 = &edi_3[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        esi = var_8
        ebx_1 += i_2
        ecx_9 = var_1c
        continue
    
    if (eax_7.b == 0x22)
        break
    
    ebx_1 += 1
    *edi_3 = eax_7.b
    edi_3 = &edi_3[1]
label_5265c2:
    esi = &esi[1]
    var_8 = esi

while (true)
    esi = &esi[1]
    
    while (true)
        eax_7.b = *esi
        
        if (eax_7.b u>= 0x80 && (eax_7.b u< 0xa0 || eax_7.b u> 0xdf) && eax_7.b u< 0xfe)
            *edi_3 = eax_7.b
            ebx_1 += 2
            eax_7.b = esi[1]
            edi_3[1] = eax_7.b
            edi_3 = &edi_3[2]
            esi = &esi[2]
            continue
        
        if (eax_7.b == 0x22)
            goto label_5265c2
        
        if (eax_7.b != 0x5c)
            ebx_1 += 1
            *edi_3 = eax_7.b
            edi_3 = &edi_3[1]
            break
        
        eax_7.b = esi[1]
        esi = &esi[1]
        
        if (eax_7.b != 0x5c && eax_7.b != 0x22)
            ebx_1 += 1
            *edi_3 = 0x5c
            edi_3 = &edi_3[1]
            continue
        
        eax_7.b = *esi
        ebx_1 += 1
        *edi_3 = eax_7.b
        edi_3 = &edi_3[1]
        break
