// 函数: sub_6a39a0
// 地址: 0x6a39a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca036
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = nullptr
void** edx = arg2
int32_t var_110 = 0
void* ecx = data_4ebe29c
void* eax_5 = data_4ebe2a0 - ecx
void** var_e8 = edx
int32_t* var_e0 = nullptr
int32_t** result
int32_t* var_10c
int32_t* var_108

if ((eax_5 & 0xffffff80) s<= 0)
label_6a3ad4:
    int32_t* esi_2 = sub_745f3f(0xf0)
    var_e0 = esi_2
    int32_t var_8_1 = 1
    
    if (esi_2 == 0)
        esi_2 = nullptr
    else
        *esi_2 = 0
        esi_2[1] = 0
        esi_2[2] = 0
        esi_2[3] = 0
        var_8_1.b = 3
        sub_6fe6b0(&esi_2[7])
        var_8_1.b = 4
        esi_2[4] = 0
        esi_2[5] = 0
        esi_2[6] = 0
        int32_t* eax_18 = *esi_2
        *esi_2 = 0
        
        if (eax_18 != 0)
            (*(*eax_18 + 8))(eax_18)
    
    int32_t* var_f0 = esi_2
    int32_t var_ec_1 = 0
    int32_t var_8_2 = 5
    int32_t* eax_19 = sub_6a4860(&var_e0, esi_2)
    int32_t* ecx_15 = *eax_19
    int32_t* var_ec_2 = ecx_15
    *eax_19 = var_ec_1
    int32_t* ebx_2 = var_e0
    
    if (ebx_2 != 0)
        bool cond:0_1 = ebx_2[1] != 1
        ecx_15 = ebx_2[1]
        ebx_2[1] -= 1
        
        if (not(cond:0_1))
            ecx_15 = (*(*ebx_2 + 4))(eax_2)
            bool cond:1_1 = ebx_2[2] != 1
            ebx_2[2]
            ebx_2[2] -= 1
            
            if (not(cond:1_1))
                ecx_15 = (*(*ebx_2 + 8))()
    
    int32_t* var_130_6 = esi_2
    int32_t* var_134_2 = esi_2
    int32_t** var_138_2 = &var_f0
    int32_t var_8_3 = 6
    int32_t* var_104 = nullptr
    int32_t var_100_1 = 0
    int32_t var_fc_1 = 0
    int32_t* var_130_7 = &var_104
    var_8_3.b = 7
    char eax_24
    int32_t ecx_19
    eax_24, ecx_19 = sub_6feb80(var_f0, var_e8, ecx_15)
    int32_t* esi_3 = var_104
    
    if (eax_24 != 0)
        int32_t var_e8_1 = 0
        int32_t eax_28 = (var_100_1 - esi_3) s/ 0x18
        var_e0 = eax_28
        
        if (eax_28 s<= 0)
        label_6a3e25:
            int32_t var_dc
            sub_6a0aa0(&var_dc)
            var_8_3.b = 0xf
            int32_t eax_42 = data_4ebe2a8
            int32_t* var_68
            int32_t* ecx_36 = var_68
            int32_t var_d8_1 = eax_42
            data_4ebe2a8 = eax_42 + 1
            int32_t* eax_44 = var_f0
            var_dc = 8
            int32_t* var_6c_1 = eax_44
            
            if (var_ec_2 != ecx_36)
                if (var_ec_2 != 0)
                    var_ec_2[2]
                    var_ec_2[2] += 1
                    ecx_36 = var_68
                
                if (ecx_36 != 0)
                    bool cond:5_1 = ecx_36[2] != 1
                    ecx_36[2]
                    ecx_36[2] -= 1
                    
                    if (not(cond:5_1))
                        (*(*ecx_36 + 8))(eax_2)
                
                int32_t* var_68_1 = var_ec_2
            
            void var_b4
            
            if (&var_b4 != var_e8)
                sub_52e3c0(&var_b4, var_e8, 0, 0xffffffff)
            
            int32_t var_8c_1 = 0x152
            char var_88_1 = 0
            sub_6a4030(&var_dc)
            result = arg1
            int32_t* eax_48 = var_f0
            var_f0 = nullptr
            *result = eax_48
            result[1] = 0
            int32_t* eax_49 = result[1]
            result[1] = var_ec_2
            var_ec_2 = eax_49
            int32_t var_110_2 = 1
            var_8_3.b = 7
            sub_5719b0(&var_dc)
            int32_t* eax_50 = var_104
            
            if (eax_50 != 0)
                int32_t* esi_6 = eax_50
                
                if (eax_50 != var_100_1)
                    do
                        if (esi_6[5] u>= 8)
                            j__free(*esi_6)
                        
                        esi_6[5] = 7
                        esi_6[4] = 0
                        *esi_6 = 0
                        esi_6 = &esi_6[6]
                    while (esi_6 != var_100_1)
                    
                    eax_50 = var_104
                
                j__free(eax_50)
        else
            int32_t* edx_7 = var_e0
            int32_t eax_29 = 0
            void** var_f4_1 = esi_3
            void** ecx_24 = esi_3
            
            while (true)
                if (ecx_24[4] != 0)
                    int16_t var_2c
                    int16_t* eax_30 = sub_6b3e90(&var_2c, var_e8)
                    var_8_3.b = 8
                    int16_t var_44
                    int16_t* eax_31 = sub_532b80(eax_30, eax_30, &var_44, &data_ad900c)
                    var_8_3.b = 9
                    int16_t var_5c
                    int16_t* eax_32
                    char ecx_28
                    eax_32, ecx_28 = sub_5327a0(eax_31, eax_31, &var_5c, var_f4_1)
                    int32_t var_130_10 = 0
                    var_8_3.b = 0xa
                    int32_t ecx_29 = sub_6a1480(&var_10c, eax_32, ecx_28)
                    int32_t var_48
                    
                    if (var_48 u>= 8)
                        ecx_29 = j__free(var_5c.d)
                    
                    var_48 = 7
                    int32_t var_4c_1 = 0
                    var_5c = 0
                    int32_t var_30
                    
                    if (var_30 u>= 8)
                        ecx_29 = j__free(var_44.d)
                    
                    var_30 = 7
                    int32_t var_34_1 = 0
                    var_44 = 0
                    var_8_3.b = 0xe
                    int32_t var_18
                    
                    if (var_18 u>= 8)
                        ecx_29 = j__free(var_2c.d)
                    
                    var_18 = 7
                    var_2c = 0
                    int32_t* eax_33 = var_10c
                    int32_t var_1c_1 = 0
                    
                    if (eax_33 == 0)
                        result = arg1
                        var_8_3.b = 7
                        int32_t var_110_3 = 1
                        *result = nullptr
                        result[1] = 0
                        
                        if (var_108 != 0)
                            bool cond:6_1 = var_108[1] != 1
                            ecx_29 = var_108[1]
                            var_108[1] -= 1
                            
                            if (not(cond:6_1))
                                ecx_29 = (*(*var_108 + 4))(eax_2)
                                bool cond:7_1 = var_108[2] != 1
                                var_108[2]
                                var_108[2] -= 1
                                
                                if (not(cond:7_1))
                                    ecx_29 = (*(*var_108 + 8))()
                        
                        int32_t* esi_9 = var_104
                        
                        if (esi_9 != 0)
                            int32_t var_114
                            int32_t var_130_18 = var_114
                            int32_t var_134_7 = ecx_29
                            sub_55d500(esi_9, var_100_1)
                            j__free(esi_9)
                        
                        break
                    
                    int32_t* var_130_14 = var_108
                    
                    if (var_108 != 0)
                        var_108[1]
                        var_108[1] += 1
                    
                    sub_6fef60(var_f0, var_e8_1, eax_33)
                    var_8_3.b = 7
                    
                    if (var_108 != 0)
                        bool cond:8_1 = var_108[1] != 1
                        var_108[1]
                        var_108[1] -= 1
                        
                        if (not(cond:8_1))
                            (*(*var_108 + 4))(eax_2)
                            bool cond:9_1 = var_108[2] != 1
                            var_108[2]
                            var_108[2] -= 1
                            
                            if (not(cond:9_1))
                                (*(*var_108 + 8))()
                    
                    edx_7 = var_e0
                    ecx_24 = var_f4_1
                    eax_29 = var_e8_1
                
                eax_29 += 1
                ecx_24 = &ecx_24[6]
                var_e8_1 = eax_29
                var_f4_1 = ecx_24
                
                if (eax_29 s>= edx_7)
                    goto label_6a3e25
    else
        result = arg1
        int32_t var_110_1 = 1
        *result = nullptr
        result[1] = 0
        
        if (esi_3 != 0)
            int32_t** var_130_8 = arg1
            int32_t var_134_4 = ecx_19
            sub_55d500(esi_3, var_100_1)
            j__free(esi_3)
    
    var_8_3.b = 0
    
    if (var_ec_2 != 0)
        bool cond:3_1 = var_ec_2[1] != 1
        var_ec_2[1]
        var_ec_2[1] -= 1
        
        if (not(cond:3_1))
            (*(*var_ec_2 + 4))(eax_2)
            int32_t edi_1 = var_ec_2[2]
            var_ec_2[2] -= 1
            
            if (edi_1 == 1)
                (*(*var_ec_2 + 8))()
else
    int32_t* ebx_1 = nullptr
    
    while (true)
        if (*(ebx_1 + ecx) == 8)
            int32_t eax_6 = edx[4]
            void* ecx_2 = ecx + 0x28 + ebx_1
            
            if (edx[5] u>= 8)
                edx = *edx
            
            int32_t var_130_1 = eax_6
            
            if (sub_536340(ecx_2, ecx_2, *(ecx_2 + 0x10), edx) == 0)
                bool edx_1 = *sub_571430(data_4ebe29c + 0x70 + ebx_1, &var_10c) != 0
                
                if (var_108 != 0)
                    bool cond:2_1 = var_108[1] != 1
                    var_108[1]
                    var_108[1] -= 1
                    
                    if (not(cond:2_1))
                        (*(*var_108 + 4))(eax_2)
                        bool cond:4_1 = var_108[2] != 1
                        var_108[2]
                        var_108[2] -= 1
                        
                        if (not(cond:4_1))
                            (*(*var_108 + 8))()
                        
                        edx_1 = edx_1
                
                if (edx_1 != 0)
                    result = arg1
                    sub_571430((var_e0 << 7) + 0x70 + data_4ebe29c, result)
                    break
                
                esi = var_e0
            
            ecx = data_4ebe29c
            edx = var_e8
        
        esi += 1
        void* eax_15 = data_4ebe2a0 - ecx
        var_e0 = esi
        ebx_1 -= 0xffffff80
        
        if (esi s>= eax_15 s>> 7)
            goto label_6a3ad4
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
