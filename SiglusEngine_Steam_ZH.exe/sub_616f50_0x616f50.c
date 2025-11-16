// 函数: sub_616f50
// 地址: 0x616f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf515
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_74
int16_t* eax_3 = sub_6a5ea0(&var_74)
int32_t var_8_1 = 0
int32_t var_64
int32_t* ebx
int32_t* var_1c0
int32_t* var_1b4
int16_t var_2c

if (var_64 == 0)
    int32_t* var_1c8 = nullptr
    int32_t* var_1c4_1 = nullptr
    var_1b4 = nullptr
    int32_t var_1b0_1 = 0
    int32_t* edi_3 = nullptr
    int32_t* var_1ac = nullptr
    int32_t* var_1a8_1 = nullptr
    var_8_1.b = 6
    void* eax_13 = data_bac510
    void* ebx_1 = *(eax_13 + 0x10bc8)
    int32_t esi_5 = *(eax_13 + 0x10bcc)
    sub_5b17d0(&var_1c8, &arg1[0x6f2])
    void* var_1e8_8 = 7
    int32_t var_18_2 = 7
    void* const var_1ec_4 = &data_aef37c
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e720(&var_2c, var_1ec_4, var_1e8_8)
    char var_1e8_9 = 1
    int32_t var_1ec_5 = 0
    int32_t var_1f0_1 = 0x16
    int32_t var_1f4_1 = 0x401
    int32_t var_1f8_1 = 0
    var_8_1.b = 7
    void** var_204_1 = &var_2c
    void* const var_34
    void** var_208 = &var_34
    int32_t** eax_16 = sub_6a1200(var_208, var_204_1, ebx_1, esi_5, var_1f8_1, var_1f4_1, 
        var_1f0_1, var_1ec_5, var_1e8_9)
    int32_t* edx_2 = *eax_16
    int32_t* ecx_16 = eax_16[1]
    eax_16[1] = 0
    *eax_16 = nullptr
    var_8_1.b = 7
    var_1b4 = edx_2
    int32_t* var_1b0_2 = ecx_16
    int32_t* var_30
    
    if (var_30 != 0)
        bool cond:0_1 = var_30[1] != 1
        var_30[1]
        var_30[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_30 + 4))(eax_2)
            bool cond:2_1 = var_30[2] != 1
            var_30[2]
            var_30[2] -= 1
            
            if (not(cond:2_1))
                (*(*var_30 + 8))()
    
    var_8_1.b = 6
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_5c
    int32_t var_48
    int16_t var_44
    
    if (edx_2 == 0)
        void** eax_21 = sub_6b9ed0(&var_5c)
        int32_t var_1ec_6 = esi_5
        var_8_1.b = 9
        void* var_1f0_2 = ebx_1
        sub_52e820(&var_208, 0xaf3f20)
        int16_t* eax_22 = sub_6ae4c0(&var_44, var_208)
        var_8_1.b = 0xa
        int16_t* eax_23 = sub_5327a0(eax_22, eax_22, &var_2c, eax_21)
        var_8_1.b = 0xb
        sub_684160(data_bac424, 2, eax_23)
        
        if (var_18_2 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_3 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_1 = 7
        var_34 = nullptr
        var_44 = 0
        
        if (var_48 u>= 8)
            j__free(var_5c)
        
        goto label_61775e
    
    void* var_1e8_16 = 7
    int32_t var_18_4 = 7
    void* const var_1ec_8 = &data_aef37c
    int32_t var_1c_4 = 0
    var_2c = 0
    int32_t var_1e8_17 = sub_52e720(&var_2c, var_1ec_8, var_1e8_16)
    var_8_1.b = 0xc
    var_8_1.b = 0xd
    sub_54d190(&var_1ac, sub_6a3730(&var_34, &var_2c, ebx_1, esi_5))
    var_8_1.b = 0xc
    
    if (var_30 != 0)
        bool cond:6_1 = var_30[1] != 1
        var_30[1]
        var_30[1] -= 1
        
        if (not(cond:6_1))
            (*(*var_30 + 4))(eax_2)
            bool cond:9_1 = var_30[2] != 1
            var_30[2]
            var_30[2] -= 1
            
            if (not(cond:9_1))
                (*(*var_30 + 8))()
    
    var_8_1.b = 6
    
    if (var_18_4 u>= 8)
        j__free(var_2c.d)
    
    if (var_1ac == 0)
        void** eax_29 = sub_6b9ed0(&var_5c)
        int32_t var_1ec_10 = esi_5
        var_8_1.b = 0xe
        void* var_1f0_4 = ebx_1
        sub_52e820(&var_208, 0xaf3f68)
        int16_t* eax_30 = sub_6ae4c0(&var_44, var_208)
        var_8_1.b = 0xf
        int16_t* eax_31 = sub_5327a0(eax_30, eax_30, &var_2c, eax_29)
        var_8_1.b = 0x10
        sub_684160(data_bac424, 2, eax_31)
        
        if (var_18_4 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_5 = 7
        int32_t var_1c_5 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_2 = 7
        var_34 = nullptr
        var_44 = 0
        
        if (var_48 u>= 8)
            j__free(var_5c)
        
        goto label_617758
    
    int32_t var_194
    sub_6efae0(&var_194)
    var_8_1.b = 0x11
    int32_t var_3c_1 = 0
    void* xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx_1))
    int32_t var_38_1 = 0
    var_194 = 2
    int16_t var_190_1 = 0x101
    int16_t var_189_1 = 0
    char var_18c_1 = 1
    var_34 = xmm0_2
    void* const eax_32 = var_34
    int32_t xmm0_4 = _mm_cvtepi32_ps(zx.o(esi_5))
    void* const var_184_1 = eax_32
    var_34 = ebx_1
    int32_t var_30_4 = esi_5
    int32_t var_180_1 = xmm0_4
    int32_t eax_34 = data_4ebe2d4
    int128_t var_138_1 = var_3c_1.o
    int32_t* eax_35 = data_4ebe2d8
    
    if (eax_35 != 0)
        eax_35[1]
        eax_35[1] += 1
    
    operator new(&var_194, eax_34, eax_35)
    int32_t eax_37 = data_4ebe2ec
    int32_t* eax_38 = data_4ebe2f0
    
    if (eax_38 != 0)
        eax_38[1]
        eax_38[1] += 1
    
    operator new[](&var_194, eax_37, eax_38)
    int32_t* eax_40 = var_1c8
    int32_t* var_1e8_27 = var_1c4_1
    
    if (var_1c4_1 != 0)
        var_1c4_1[1]
        var_1c4_1[1] += 1
    
    int32_t ecx_41 = sub_6f1260(&var_194, nullptr, eax_40)
    int32_t var_1e8_28 = ecx_41
    int32_t var_1d0
    int32_t* var_1ec_15 = &var_1d0
    float ecx_43 = sub_6fd020(data_4ebe2d4, ecx_41, 0)
    int32_t var_1e8_29 = 0
    int32_t var_1ec_16 = 0
    int32_t var_1f0_7 = var_1d0
    char eax_42 = sub_6f01c0(&var_194, 0, ecx_43, 0)
    int32_t* ecx_45 = data_4ebe2d4
    int32_t* var_28
    
    if (eax_42 == 0)
        sub_6fd140(ecx_45)
    else
        int32_t var_1e8_30 = sub_6fd140(ecx_45)
        int32_t* var_40
        sub_6f3910(edx_2, &var_40)
        var_8_1.b = 0x12
        sub_6178d0(&var_28, var_1ac)
        var_8_1.b = 0x13
        sub_6f5d30(var_40)
        int32_t* edi_7 = var_28
        sub_6f5e50(edi_7)
        int32_t* var_1e8_34 = &var_194
        var_8_1.b = 0x12
        
        if (sub_6133f0(arg1) == 0)
            if (edi_7 != 0)
                (*(*edi_7 + 8))(edi_7)
            
            var_8_1.b = 0x11
            int32_t* ecx_50 = var_40
            
            if (ecx_50 != 0)
                (*(*ecx_50 + 8))(ecx_50)
            
            goto label_61774f
        
        if (edi_7 != 0)
            (*(*edi_7 + 8))(edi_7)
        
        var_8_1.b = 0x11
        int32_t* ecx_51 = var_40
        
        if (ecx_51 != 0)
            (*(*ecx_51 + 8))(ecx_51)
    
    void* var_1e8_39 = 9
    int32_t var_30_5 = 7
    void* const var_1ec_18 = &data_aef35c
    var_34 = nullptr
    var_44 = 0
    sub_52e720(&var_44, var_1ec_18, var_1e8_39)
    char var_1e8_40 = 0
    int32_t var_1ec_19 = 2
    int32_t var_1f0_8 = 0x16
    int32_t var_1f4_4 = 0
    int32_t var_1f8_3 = 0
    var_8_1.b = 0x14
    void** var_204_3 = &var_44
    var_208 = &var_1c0
    sub_6a1200(var_208, var_204_3, ebx_1, esi_5, var_1f8_3, var_1f4_4, var_1f0_8, var_1ec_19, 
        var_1e8_40)
    var_8_1.b = 0x16
    
    if (var_30_5 u>= 8)
        j__free(var_44.d)
    
    int32_t* ecx_53 = var_1c0
    int32_t var_30_6 = 7
    var_34 = nullptr
    var_44 = 0
    int16_t* eax_49
    
    if (ecx_53 != 0)
        int32_t* var_1e8_43 = ecx_53
        int32_t* eax_50
        int32_t ecx_56
        eax_50, ecx_56 = sub_6f3910(ecx_53, &var_28)
        var_8_1.b = 0x19
        int32_t var_1e8_44 = *eax_50
        bool cond:18_1 = sub_6f39a0(edx_2, ecx_56) == 0
        var_8_1.b = 0x16
        int32_t* ecx_58 = var_28
        
        if (ecx_58 != 0)
            (*(*ecx_58 + 8))(ecx_58)
        
        if (cond:18_1 != 0)
            void** eax_53 = sub_6b9ed0(&var_2c)
            var_8_1.b = 0x1a
            eax_49 = sub_548cb0(eax_53, 0xaf3ff0, &var_5c, eax_53)
            var_8_1.b = 0x1b
            goto label_617725
        
        sub_5b17d0(&arg1[0x700], &var_1c0)
        void* var_1e8_49 = 0x11
        int32_t var_18_6 = 7
        void* const var_1ec_23 = &data_af4024
        int32_t var_1c_6 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_1ec_23, var_1e8_49)
        var_8_1.b = 0x1c
        sub_684160(data_bac424, 5, &var_2c)
        sub_52e8a0(&var_2c)
        var_8_1.b = 0x11
        sub_54b010(&var_1c0)
        var_8_1.b = 6
        sub_6efc80(&var_194)
        var_8_1.b = 5
        sub_54b010(&var_1ac)
        var_8_1.b = 4
        sub_54b010(&var_1b4)
        var_8_1.b = 0
        sub_54b010(&var_1c8)
        ebx.b = 1
    else
        int16_t* eax_48 = sub_6b9ed0(&var_2c)
        var_8_1.b = 0x17
        eax_49 = sub_548cb0(eax_48, 0xaf3fbc, &var_5c, eax_48)
        var_8_1.b = 0x18
    label_617725:
        sub_684160(data_bac424, 2, eax_49)
        sub_52e8a0(&var_5c)
        sub_52e8a0(&var_2c)
        var_8_1.b = 0x11
        sub_54b010(&var_1c0)
    label_61774f:
        var_8_1.b = 6
        sub_6efc80(&var_194)
    label_617758:
        edi_3 = var_1a8_1
    label_61775e:
        var_8_1.b = 5
        
        if (edi_3 != 0)
            bool cond:12_1 = edi_3[1] != 1
            edi_3[1]
            edi_3[1] -= 1
            
            if (not(cond:12_1))
                (*(*edi_3 + 4))(eax_2)
                bool cond:15_1 = edi_3[2] != 1
                edi_3[2]
                edi_3[2] -= 1
                
                if (not(cond:15_1))
                    (*(*edi_3 + 8))()
        
        var_8_1.b = 4
        
        if (ecx_16 != 0)
            bool cond:14_1 = ecx_16[1] != 1
            ecx_16[1]
            ecx_16[1] -= 1
            
            if (not(cond:14_1))
                (*(*ecx_16 + 4))(eax_2)
                bool cond:17_1 = ecx_16[2] != 1
                ecx_16[2]
                ecx_16[2] -= 1
                
                if (not(cond:17_1))
                    (*(*ecx_16 + 8))()
        
        var_8_1.b = 0
        
        if (var_1c4_1 != 0)
            bool cond:16_1 = var_1c4_1[1] != 1
            var_1c4_1[1]
            var_1c4_1[1] -= 1
            
            if (not(cond:16_1))
                (*(*var_1c4_1 + 4))(eax_2)
                int32_t esi_6 = var_1c4_1[2]
                var_1c4_1[2] -= 1
                
                if (esi_6 == 1)
                    (*(*var_1c4_1 + 8))()
        
        ebx.b = 0
else
    sub_6281e0(eax_3, &var_74, &var_1b4, 0, 0)
    int32_t* ecx_1 = var_1b4
    int32_t* var_1b0
    
    if (ecx_1 != 0)
        var_8_1.b = 2
        sub_54d190(&arg1[0x700], sub_54d980(ecx_1, &var_1c0, 0))
        var_8_1.b = 1
        int32_t* var_1bc
        
        if (var_1bc != 0)
            bool cond:3_1 = var_1bc[1] != 1
            var_1bc[1]
            var_1bc[1] -= 1
            
            if (not(cond:3_1))
                (*(*var_1bc + 4))(eax_2)
                bool cond:5_1 = var_1bc[2] != 1
                var_1bc[2]
                var_1bc[2] -= 1
                
                if (not(cond:5_1))
                    (*(*var_1bc + 8))()
        
        void* var_1e8_4 = 0x17
        int32_t var_18_1 = 7
        void* const var_1ec_2 = &data_af3ef0
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_1ec_2, var_1e8_4)
        var_8_1.b = 3
        sub_684160(data_bac424, 5, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        var_8_1.b = 0
        
        if (var_1b0 != 0)
            bool cond:8_1 = var_1b0[1] != 1
            var_1b0[1]
            var_1b0[1] -= 1
            
            if (not(cond:8_1))
                (*(*var_1b0 + 4))(eax_2)
                int32_t esi_3 = var_1b0[2]
                var_1b0[2] -= 1
                
                if (esi_3 == 1)
                    (*(*var_1b0 + 8))()
        
        ebx.b = 1
    else
        var_8_1.b = ecx_1.b
        
        if (var_1b0 == 0)
            ebx.b = 0
        else
            bool cond:4_1 = var_1b0[1] != 1
            var_1b0[1]
            var_1b0[1] -= 1
            
            if (cond:4_1)
                ebx.b = 0
            else
                (*(*var_1b0 + 4))(eax_2)
                int32_t esi_1 = var_1b0[2]
                var_1b0[2] -= 1
                
                if (esi_1 != 1)
                    ebx.b = 0
                else
                    (*(*var_1b0 + 8))()
                    ebx.b = 0
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
