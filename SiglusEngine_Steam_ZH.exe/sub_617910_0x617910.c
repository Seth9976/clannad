// 函数: sub_617910
// 地址: 0x617910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf63e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2dc = arg1
int32_t var_8_1 = 0
int32_t var_300 = 0
int32_t var_2fc = 0
int32_t var_308 = 0
int32_t* var_2f0 = nullptr
int32_t var_304 = 0
var_8_1.b = 2
void* eax_3 = data_bac510
int32_t* esi = *(arg1 + 0x1bcc)
int32_t ebx = *(eax_3 + 0x7c)
int32_t* edi = *(eax_3 + 0x80)
int32_t eax_4 = *(arg1 + 0x1bc8)
int32_t var_2f8 = eax_4

if (esi != 0)
    esi[1]
    esi[1] += 1
    eax_4 = var_2f8

int32_t var_318 = eax_4
void* const var_340 = 7
int32_t* var_314 = esi
int32_t* var_344 = &data_aef37c
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, var_344, var_340)
char var_340_1 = 0
var_344 = nullptr
int32_t var_348 = 0x16
int32_t var_34c = 0x401
int32_t var_350 = 0
var_8_1.b = 3
int16_t* var_35c = &var_44
int32_t var_1c
int32_t* var_360 = &var_1c
void** eax_6 = sub_6a1200(var_360, var_35c, ebx, edi, var_350, var_34c, var_348, var_344, var_340_1)
int32_t* edx_1 = *eax_6
int32_t* ecx_2 = eax_6[1]
eax_6[1] = 0
*eax_6 = nullptr
var_8_1.b = 3
int32_t* var_300_1 = edx_1
int32_t* var_2fc_1 = ecx_2
int32_t* var_18

if (var_18 != 0)
    bool cond:0_1 = var_18[1] != 1
    var_18[1]
    var_18[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_18 + 4))(eax_2)
        bool cond:1_1 = var_18[2] != 1
        var_18[2]
        var_18[2] -= 1
        
        if (not(cond:1_1))
            (*(*var_18 + 8))()

var_8_1.b = 2

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t* ebx_1
void* var_5c
int16_t var_2c
int16_t* eax_13

if (edx_1 != 0)
    void* var_340_4 = 7
    var_30 = 7
    var_344 = &data_aef37c
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_340_5 = sub_52e720(&var_44, var_344, var_340_4)
    var_344 = edi
    var_8_1.b = 8
    int32_t* eax_14 = sub_6a3730(&var_1c, &var_44, ebx, var_344)
    int32_t* edx_4 = *eax_14
    int32_t* ecx_11 = eax_14[1]
    eax_14[1] = 0
    *eax_14 = 0
    var_8_1.b = 8
    var_2f0 = ecx_11
    int32_t* var_308_1 = edx_4
    int32_t* var_304_1 = ecx_11
    
    if (var_18 != 0)
        bool cond:2_1 = var_18[1] != 1
        var_18[1]
        var_18[1] -= 1
        
        if (not(cond:2_1))
            (*(*var_18 + 4))(eax_2)
            bool cond:3_1 = var_18[2] != 1
            var_18[2]
            var_18[2] -= 1
            
            if (not(cond:3_1))
                (*(*var_18 + 8))()
    
    var_8_1.b = 2
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    if (edx_4 == 0)
        void** eax_19 = sub_6b9ed0(&var_5c)
        var_344 = edi
        var_8_1.b = 0xa
        int32_t var_348_3 = ebx
        sub_52e820(&var_360, 0xaf3f68)
        void** eax_20 = sub_6ae4c0(&var_2c, var_360)
        var_8_1.b = 0xb
        eax_13 = sub_5327a0(eax_20, eax_20, &var_44, eax_19)
        var_8_1.b = 0xc
        goto label_617bdb
    
    int32_t var_2cc
    sub_6efae0(&var_2cc)
    var_8_1.b = 0xd
    int32_t var_24_1 = 0
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx))
    int32_t var_20_1 = 0
    var_2cc = 2
    int16_t var_2c8_1 = 0x101
    int16_t var_2c1_1 = 0
    char var_2c4_1 = 1
    var_1c = xmm0_2
    int32_t eax_21 = var_1c
    int32_t xmm0_4 = _mm_cvtepi32_ps(zx.o(edi))
    int32_t var_2bc_1 = eax_21
    var_1c = ebx
    int32_t* var_18_3 = edi
    int32_t var_2b8_1 = xmm0_4
    int128_t var_270_1 = var_24_1.o
    var_344 = data_4ebe2d4
    int32_t* eax_24 = data_4ebe2d8
    
    if (eax_24 != 0)
        eax_24[1]
        eax_24[1] += 1
    
    operator new(&var_2cc, var_344, eax_24)
    var_344 = data_4ebe2ec
    void* eax_27 = data_4ebe2f0
    void* var_340_13 = eax_27
    
    if (eax_27 != 0)
        *(eax_27 + 4)
        *(eax_27 + 4) += 1
    
    operator new[](&var_2cc)
    var_1c = var_2f8
    int32_t* var_18_4 = esi
    
    if (esi != 0)
        esi[1]
        esi[1] += 1
    
    var_8_1.b = 0xe
    void var_1f4
    int32_t ecx_26 = sub_5b17d0(&var_1f4, &var_1c)
    var_8_1.b = 0xd
    
    if (esi != 0)
        bool cond:7_1 = esi[1] != 1
        ecx_26 = esi[1]
        esi[1] -= 1
        
        if (not(cond:7_1))
            (*(*esi + 4))(eax_2)
            bool cond:10_1 = esi[2] != 1
            ecx_26 = esi[2]
            esi[2] -= 1
            
            if (not(cond:10_1))
                ecx_26 = (*(*esi + 8))()
    
    int32_t var_340_15 = ecx_26
    int32_t var_2ec
    var_344 = &var_2ec
    float ecx_30 = sub_6fd020(data_4ebe2d4, ecx_26, 0)
    int32_t var_340_16 = 0
    var_344 = nullptr
    int32_t var_348_5 = var_2ec
    char eax_35 = sub_6f01c0(&var_2cc, 0, ecx_30, 0)
    int32_t* ecx_32 = data_4ebe2d4
    
    if (eax_35 != 0)
        int32_t var_340_17 = sub_6fd140(ecx_32)
        int32_t* var_32c
        var_344 = &var_32c
        sub_6f3910(edx_1, var_344)
        var_8_1.b = 0xf
        int32_t* ecx_35 = edx_4
        int32_t* ebx_3 = *ecx_35
        
        if (ebx_3 != 0)
            (*(*ebx_3 + 4))(ebx_3)
            ecx_35 = edx_4
        
        int32_t var_3c_1 = ecx_35[1]
        int32_t var_38_1 = ecx_35[2]
        int32_t var_34_3 = ecx_35[3]
        int32_t var_30_2 = ecx_35[4]
        var_8_1.b = 0x10
        sub_6f5d30(var_32c)
        sub_6f5e50(ebx_3)
        ebx_1 = var_2dc
        ebx_1[0x6b7] = ebx_1[0x6b6]
        var_2dc = &var_2cc
        sub_530ba0(&ebx_1[0x6b6], &var_2dc)
        
        if (sub_6f6480(&ebx_1[0x24]) != 0)
            void var_74
            sub_536170(&var_74, data_bac510 + 0xa4dfe4)
            var_8_1.b = 0x11
            int32_t var_64
            
            if (var_64 == 0)
                goto label_618044
            
            int32_t eax_45 = sub_626870(&var_74, 0)
            
            if (eax_45.b == 0)
                goto label_618044
            
            char var_340_23 = 0
            var_344 = nullptr
            int32_t* var_2e0
            sub_6281e0(eax_45, &var_74, &var_2e0, var_344.b, var_340_23)
            var_8_1.b = 0x12
            
            if (var_2e0 == 0)
                goto label_61803b
            
            int32_t var_1ac
            sub_6efae0(&var_1ac)
            var_8_1.b = 0x13
            int32_t var_24_2 = 0
            int32_t xmm0_7 = _mm_cvtepi32_ps(zx.o(ebx))
            int32_t var_20_2 = 0
            var_1ac = 2
            int16_t var_1a8_1 = 0x101
            int16_t var_1a1_1 = 0x101
            char var_1a4_1 = 1
            var_1c = xmm0_7
            int32_t eax_46 = var_1c
            int32_t xmm0_9 = _mm_cvtepi32_ps(zx.o(edi))
            int32_t var_19c_1 = eax_46
            var_1c = ebx
            int32_t* var_18_6 = edi
            int32_t var_198_1 = xmm0_9
            int128_t var_150_1 = var_24_2.o
            sub_54d950(&var_344, &data_4ebe2d4)
            operator new(&var_1ac)
            sub_54d950(&var_344, &data_4ebe2ec)
            operator new[](&var_1ac)
            sub_54d980(var_2e0, &var_344, 0)
            int32_t ecx_49 = sub_6f1260(&var_1ac, nullptr)
            int32_t var_340_24 = ecx_49
            var_344 = &var_2ec
            float ecx_51 = sub_6fd020(data_4ebe2d4, ecx_49, 0)
            int32_t var_340_25 = 0
            var_344 = nullptr
            int32_t var_348_11 = var_2ec
            char eax_48 = sub_6f01c0(&var_1ac, 0, ecx_51, 0)
            int32_t* ecx_53 = data_4ebe2d4
            
            if (eax_48 != 0)
                sub_6fd140(ecx_53)
                int32_t* var_340_26 = &var_1ac
                
                if (sub_6133f0(ebx_1) == 0)
                    goto label_618007
                
                var_8_1.b = 0x12
                sub_6efc80(&var_1ac)
            label_61803b:
                var_8_1.b = 0x11
                sub_54b010(&var_2e0)
            label_618044:
                void* const var_340_27 = 4
                int32_t var_48_1 = 7
                var_344 = &data_af4048
                int32_t var_4c_1 = 0
                var_5c.w = 0
                sub_52e720(&var_5c, var_344, var_340_27)
                char var_340_28 = 0
                var_344 = 2
                int32_t var_348_12 = 0x16
                int32_t var_34c_5 = 0
                int32_t var_350_2 = 0
                var_8_1.b = 0x14
                void** var_35c_3 = &var_5c
                int32_t* var_310
                var_360 = &var_310
                sub_6a1200(var_360, var_35c_3, ebx, edi, var_350_2, var_34c_5, var_348_12, var_344, 
                    var_340_28)
                var_8_1.b = 0x16
                sub_52e8a0(&var_5c)
                int32_t* ecx_61 = var_310
                void var_8c
                
                if (ecx_61 != 0)
                    int32_t* var_340_31 = ecx_61
                    int32_t* var_28
                    var_344 = &var_28
                    int32_t* eax_52
                    int32_t* ecx_67
                    eax_52, ecx_67 = sub_6f3910(ecx_61, var_344)
                    var_8_1.b = 0x19
                    int32_t var_340_32 = *eax_52
                    var_344 = ecx_67
                    bool cond:13_1 = sub_6f39a0(edx_1, var_344) == 0
                    var_8_1.b = 0x16
                    int32_t* ecx_69 = var_28
                    
                    if (ecx_69 != 0)
                        (*(*ecx_69 + 8))(ecx_69)
                    
                    if (cond:13_1 == 0)
                        sub_5b17d0(&ebx_1[0x704], &var_310)
                        void* const var_340_37 = 0x12
                        int32_t var_18_7 = 7
                        var_344 = &data_af4054
                        var_1c = 0
                        var_2c = 0
                        sub_52e720(&var_2c, var_344, var_340_37)
                        var_8_1.b = 0x1c
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_77 = data_bac424
                        int32_t* var_340_38 = &var_2c
                        var_344 = 5
                        sub_684160(ecx_77, var_344, var_340_38)
                        sub_52e8a0(&var_2c)
                        ebx_1.b = 1
                    else
                        void** eax_55 = sub_6b9ed0(&var_2c)
                        var_8_1.b = 0x1a
                        int32_t* eax_56 = sub_548cb0(eax_55, 0xaf3ff0, &var_8c, eax_55)
                        var_8_1.b = 0x1b
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_72 = data_bac424
                        var_344 = 2
                        sub_684160(ecx_72, var_344, eax_56)
                        sub_52e8a0(&var_8c)
                        sub_52e8a0(&var_2c)
                        ebx_1.b = 0
                else
                    void** eax_50 = sub_6b9ed0(&var_8c)
                    var_8_1.b = 0x17
                    int32_t* eax_51 = sub_548cb0(eax_50, 0xaf3fbc, &var_2c, eax_50)
                    var_8_1.b = 0x18
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_64 = data_bac424
                    var_344 = 2
                    sub_684160(ecx_64, var_344, eax_51)
                    sub_52e8a0(&var_2c)
                    sub_52e8a0(&var_8c)
                    ebx_1.b = 0
                var_8_1.b = 0x11
                sub_54b010(&var_310)
            else
                sub_6fd140(ecx_53)
            label_618007:
                var_8_1.b = 0x12
                sub_6efc80(&var_1ac)
                var_8_1.b = 0x11
                sub_54b010(&var_2e0)
                ebx_1.b = 0
            
            sub_52e8a0(&var_74)
        else
            ebx_1.b = 0
        
        var_8_1.b = 0xf
        
        if (ebx_3 != 0)
            (*(*ebx_3 + 8))(ebx_3)
        
        var_8_1.b = 0xd
        int32_t* ecx_82 = var_32c
        
        if (ecx_82 != 0)
            (*(*ecx_82 + 8))(ecx_82)
    else
        sub_6fd140(ecx_32)
        ebx_1.b = 0
    
    var_8_1.b = 2
    sub_6efc80(&var_2cc)
else
    int16_t* eax_11 = sub_6b9ed0(&var_5c)
    var_344 = edi
    var_8_1.b = 5
    int32_t var_348_1 = ebx
    sub_52e820(&var_360, 0xaf3f20)
    int16_t* eax_12 = sub_6ae4c0(&var_2c, var_360)
    var_8_1.b = 6
    eax_13 = sub_5327a0(eax_12, eax_12, &var_44, eax_11)
    var_8_1.b = 7
label_617bdb:
    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_18 = data_bac424
    var_344 = 2
    sub_684160(ecx_18, var_344, eax_13)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    var_44 = 0
    int32_t var_34_2 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    var_2c = 0
    var_1c = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    ebx_1.b = 0
var_8_1.b = 1

if (var_2f0 != 0)
    bool cond:6_1 = var_2f0[1] != 1
    var_2f0[1]
    var_2f0[1] -= 1
    
    if (not(cond:6_1))
        (*(*var_2f0 + 4))(eax_2)
        bool cond:9_1 = var_2f0[2] != 1
        var_2f0[2]
        var_2f0[2] -= 1
        
        if (not(cond:9_1))
            (*(*var_2f0 + 8))()

var_8_1.b = 0

if (ecx_2 != 0)
    bool cond:8_1 = ecx_2[1] != 1
    ecx_2[1]
    ecx_2[1] -= 1
    
    if (not(cond:8_1))
        (*(*ecx_2 + 4))(eax_2)
        bool cond:12_1 = ecx_2[2] != 1
        ecx_2[2]
        ecx_2[2] -= 1
        
        if (not(cond:12_1))
            (*(*ecx_2 + 8))()

int32_t var_8_2 = 0xffffffff

if (esi != 0)
    bool cond:11_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:11_1))
        (*(*esi + 4))(eax_2)
        int32_t edi_1 = esi[2]
        esi[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi + 8))()

int32_t* result
result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
