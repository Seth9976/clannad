// 函数: sub_610f20
// 地址: 0x610f20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bed5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_bac454
sub_6f5550(0x4ebe6b0)

if (*(data_bac4a0 + 0x199) == 0)
    goto label_61117b

int32_t* var_28
int32_t* eax_4 = sub_6f5bb0(&var_28)
int32_t var_8_1 = 0
int32_t* edi_1 = *eax_4

if (edi_1 != 0)
    (*(*edi_1 + 4))(edi_1)

int32_t* eax_5 = *(ebx + 0x1b68)
*(ebx + 0x1b68) = edi_1

if (eax_5 != 0)
    (*(*eax_5 + 8))(eax_5)

*(ebx + 0x1b6c) = eax_4[1]
*(ebx + 0x1b70) = eax_4[2]
*(ebx + 0x1b74) = eax_4[3]
int32_t var_8_2 = 0xffffffff
int32_t* ecx_3 = var_28
*(ebx + 0x1b78) = eax_4[4]

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)

int32_t* eax_11 = sub_6f5f70(&var_28)
int32_t var_8_3 = 1
int32_t* edi_2 = *eax_11

if (edi_2 != 0)
    (*(*edi_2 + 4))(edi_2)

int32_t* eax_12 = *(ebx + 0x1b7c)
*(ebx + 0x1b7c) = edi_2

if (eax_12 != 0)
    (*(*eax_12 + 8))(eax_12)

*(ebx + 0x1b80) = eax_11[1]
*(ebx + 0x1b84) = eax_11[2]
*(ebx + 0x1b88) = eax_11[3]
int32_t var_8_4 = 0xffffffff
int32_t* ecx_6 = var_28
*(ebx + 0x1b8c) = eax_11[4]

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(ecx_6)

sub_6f5d30(*(ebx + 0x1b68))
sub_6f5e50(*(ebx + 0x1b7c))
void* eax_18 = data_bac4a0
int32_t var_34_1 = data_4ebe6a8
int32_t xmm0_2 = data_4ebe6ac
int32_t ecx_7 = *(eax_18 + 0x30)
int32_t var_38_1 = *(eax_18 + 0x34)
int32_t* eax_20 = data_4ebe4b0
void* const var_44 = nullptr
int32_t var_40_1 = 0
int32_t var_3c_1 = ecx_7
int32_t ecx_8 = *eax_20
int32_t* var_1d0_11 = &var_44
int32_t** var_1d4 = eax_20
int32_t eax_21 = (*(ecx_8 + 0xbc))(var_1d4, var_1d0_11)
int32_t* result
int32_t var_1e4
int16_t var_2c
void* const var_1c
int32_t* var_18

if (eax_21 s>= 0)
    sub_6f60f0((((((zx.d(*(ebx + 0x1ae7)) << 8) + zx.d(*(ebx + 0x1ae6))) << 8)
        + zx.d(*(ebx + 0x1ae5))) << 8) + zx.d(*(ebx + 0x1ae4)))
label_61117b:
    int32_t eax_28
    int32_t ecx_23
    eax_28, ecx_23 = sub_5cb350(data_bac468 + 0x3bc)
    int32_t var_1ac
    char var_199_1
    void* eax_31
    
    if (eax_28 == 2 || eax_28 == 3)
        if (*(data_bac468 + 0x45c) == 1)
            int32_t* eax_30 = data_4ebe290
            
            if (eax_30 != 0)
                int32_t ecx_24 = *eax_30
                int32_t* var_1d0_16 = &var_1ac
                var_1d4 = eax_30
                ecx_23 = (*(ecx_24 + 0x2c))(var_1d4, var_1d0_16)
                
                if (var_1ac == 9)
                    goto label_6111b7
        
        eax_31 = data_bac4a0
        var_199_1 = 1
        
        if (*(eax_31 + 0x1a8) == 0)
            goto label_611aa4
        
        goto label_6111de
    
label_6111b7:
    eax_31 = data_bac4a0
    var_199_1 = 0
label_6111de:
    void* eax_50
    int32_t* ecx_34
    
    if (*(eax_31 + 0x1a8) == 4)
        int32_t var_1d0_17 = ecx_23
        int32_t* ecx_25 = *(ebx + 0x1c18)
        var_1d4 = &var_28
        int32_t* eax_32 = sub_6f3910(ecx_25, var_1d4)
        int32_t var_8_6 = 4
        int32_t* edi_3 = *eax_32
        
        if (edi_3 != 0)
            (*(*edi_3 + 4))(edi_3)
        
        int32_t* eax_33 = *(ebx + 0x1b90)
        *(ebx + 0x1b90) = edi_3
        
        if (eax_33 != 0)
            (*(*eax_33 + 8))(eax_33)
        
        *(ebx + 0x1b94) = eax_32[1]
        *(ebx + 0x1b98) = eax_32[2]
        *(ebx + 0x1b9c) = eax_32[3]
        int32_t var_8_7 = 0xffffffff
        int32_t* ecx_28 = var_28
        *(ebx + 0x1ba0) = eax_32[4]
        
        if (ecx_28 != 0)
            (*(*ecx_28 + 8))(ecx_28)
        
        int32_t* esi_5 = *(ebx + 0x1c20)
        int32_t* edi_4 = *esi_5
        
        if (edi_4 != 0)
            (*(*edi_4 + 4))(edi_4)
        
        int32_t* eax_40 = *(ebx + 0x1ba4)
        *(ebx + 0x1ba4) = edi_4
        
        if (eax_40 != 0)
            (*(*eax_40 + 8))(eax_40)
        
        *(ebx + 0x1ba8) = esi_5[1]
        *(ebx + 0x1bac) = esi_5[2]
        *(ebx + 0x1bb0) = esi_5[3]
        *(ebx + 0x1bb4) = esi_5[4]
        sub_6f5d30(*(ebx + 0x1b90))
        sub_6f5e50(*(ebx + 0x1ba4))
        void* eax_45 = *(ebx + 0x1c18)
        int32_t var_34_2 = data_4ebe6a8
        int32_t xmm0_4 = data_4ebe6ac
        int32_t ecx_30 = *(eax_45 + 0x10)
        int32_t var_3c_2 = *(eax_45 + 0xc)
        int32_t* eax_47 = data_4ebe4b0
        var_44 = nullptr
        int32_t var_40_2 = 0
        int32_t var_38_2 = ecx_30
        int32_t var_30_2 = xmm0_4
        int32_t ecx_31 = *eax_47
        void** var_1d0_25 = &var_44
        var_1d4 = eax_47
        int32_t eax_48 = (*(ecx_31 + 0xbc))(var_1d4, var_1d0_25)
        
        if (eax_48 s< 0)
            int16_t* eax_49
            int32_t edx_2
            eax_49, edx_2 = sub_52e820(&var_1e4, u"SetViewport")
            sub_6f1a40(eax_49, edx_2, eax_48, var_1e4)
        
        sub_6f60f0(0)
        ecx_34 = *(ebx + 0x1c34)
        eax_50 = *(ebx + 0x1c30)
        goto label_61171a
    
    char eax_51
    int32_t ecx_35
    eax_51, ecx_35 = sub_610ed0()
    
    if (eax_51 == 0)
        if (*(ebx + 0x1bc8) != 0)
            sub_5f1200(ebx + 0x1bc8)
        
        if (*(ebx + 0x1bd0) != 0)
            sub_5f1200(ebx + 0x1bd0)
        
        sub_611b30(ebx + 0x1b90, ebx + 0x1b68)
        sub_611b30(ebx + 0x1ba4, ebx + 0x1b7c)
        goto label_61170f
    
    if (*(ebx + 0x1bc8) != 0 && *(ebx + 0x1bd0) != 0)
        goto label_61166e
    
    void* const var_1d0_29 = 0xe
    var_18 = 7
    var_1d4 = &data_af3a20
    var_1c = nullptr
    var_2c = 0
    sub_52e720(&var_2c, var_1d4, var_1d0_29)
    int32_t var_8_8 = 5
    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_41 = data_bac424
    int16_t* var_1d0_30 = &var_2c
    var_1d4 = 5
    sub_684160(ecx_41, var_1d4, var_1d0_30)
    int32_t var_8_9 = 0xffffffff
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    sub_5f1200(ebx + 0x1bc8)
    sub_5f1200(ebx + 0x1bd0)
    void* eax_54 = data_bac4a0
    void* var_1d0_32 = 9
    var_1d4 = &data_af3a40
    int32_t var_30_3 = 7
    int32_t ecx_44 = *(eax_54 + 8)
    int32_t var_198 = *(eax_54 + 0xc)
    int32_t var_34_3 = 0
    var_44.w = 0
    sub_52e720(&var_44, var_1d4, var_1d0_32)
    char var_1d0_33 = 1
    var_1d4 = nullptr
    int32_t var_1d8_1 = 0x16
    int32_t var_1dc_1 = 0x401
    int32_t var_1e0_1 = 0
    int32_t var_8_10 = 6
    var_1e4 = var_198
    void** var_1ec_1 = &var_44
    void** var_1f0 = &var_1c
    var_8_10.b = 7
    sub_54d190(ebx + 0x1bc8, 
        sub_6a1200(var_1f0, var_1ec_1, ecx_44, var_1e4, var_1e0_1, var_1dc_1, var_1d8_1, var_1d4, 
            var_1d0_33))
    var_8_10.b = 6
    sub_54b010(&var_1c)
    int32_t var_8_11 = 0xffffffff
    
    if (var_30_3 u>= 8)
        j__free(var_44)
    
    void var_74
    void var_5c
    
    if (*(ebx + 0x1bc8) != 0)
        void* const var_1d0_38 = 9
        int32_t var_30_4 = 7
        var_1d4 = &data_af3a40
        int32_t var_34_4 = 0
        var_44.w = 0
        int32_t var_1d0_39 = sub_52e720(&var_44, var_1d4, var_1d0_38)
        int32_t var_8_13 = 0xb
        var_1d4 = var_198
        int32_t* var_1e0 = &var_1c
        var_8_13.b = 0xc
        sub_54d190(ebx + 0x1bd0, sub_6a3730(var_1e0, &var_44, ecx_44, var_1d4))
        var_8_13.b = 0xb
        sub_54b010(&var_1c)
        int32_t var_8_14 = 0xffffffff
        sub_52e8a0(&var_44)
        
        if (*(ebx + 0x1bd0) != 0)
            void* const var_1d0_43 = 0xf
            var_18 = 7
            var_1d4 = &data_af3af4
            var_1c = nullptr
            var_2c = 0
            sub_52e720(&var_2c, var_1d4, var_1d0_43)
            int32_t var_8_16 = 0x10
            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_68 = data_bac424
            int32_t* var_1d0_44 = &var_2c
            var_1d4 = 5
            sub_684160(ecx_68, var_1d4, var_1d0_44)
            int32_t var_8_17 = 0xffffffff
            ecx_35 = sub_52e8a0(&var_2c)
        label_61166e:
            int32_t var_1d0_45 = ecx_35
            int32_t* ecx_70 = *(ebx + 0x1bc8)
            var_1d4 = &var_28
            int32_t var_8_18 = 0x11
            sub_611b30(ebx + 0x1b90, sub_6f3910(ecx_70, var_1d4))
            int32_t var_8_19 = 0xffffffff
            int32_t* ecx_72 = var_28
            
            if (ecx_72 != 0)
                (*(*ecx_72 + 8))(ecx_72)
            
            sub_611b30(ebx + 0x1ba4, *(ebx + 0x1bd0))
            sub_6f5d30(*(ebx + 0x1b90))
            sub_6f5e50(*(ebx + 0x1ba4))
            void* eax_66 = *(ebx + 0x1bc8)
            int32_t var_1d0_51 = *(eax_66 + 0x10)
            var_1d4 = *(eax_66 + 0xc)
            sub_6f6c00(&data_4ebe4b0, 0, 0, var_1d4, var_1d0_51)
            sub_6f60f0((((((zx.d(*(ebx + 0x1aeb)) << 8) + zx.d(*(ebx + 0x1aea))) << 8)
                + zx.d(*(ebx + 0x1ae9))) << 8) + zx.d(*(ebx + 0x1ae8)))
        label_61170f:
            void* eax_70 = data_bac4a0
            ecx_34 = *(eax_70 + 0xc)
            eax_50 = *(eax_70 + 8)
        label_61171a:
            var_18 = ecx_34
            var_1c = eax_50
            int32_t var_20_1 = 0
            *(ebx + 0x1a60) = 0.o
            
            if (sub_611b80(ebx).b == 0)
                result.b = 0
            else
                if (*(data_bac4a0 + 0x199) == 0)
                    goto label_611aa4
                
                if (sub_610ed0() == 0 || var_199_1 != 0)
                    goto label_611aa4
                
                sub_6f5d30(*(ebx + 0x1b68))
                sub_6f5e50(*(ebx + 0x1b7c))
                void* esi_7 = data_bac4a0
                void* ecx_82 = data_bac480
                int32_t edi_6 = *(esi_7 + 8)
                var_198 = *(esi_7 + 0x10)
                int32_t eax_74 = *(esi_7 + 0x14)
                int32_t var_1b0 = *(esi_7 + 0x20)
                int32_t eax_76 = *(esi_7 + 0x24)
                int32_t ebx_1 = *(esi_7 + 0xc)
                int32_t var_1a0 = divs.dp.d(sx.q(*(ecx_82 + 0x160) * *(esi_7 + 0x20)), edi_6)
                var_1ac = divs.dp.d(sx.q(*(ecx_82 + 0x164) * *(esi_7 + 0x24)), ebx_1)
                int32_t var_194
                sub_6efae0(&var_194)
                int32_t var_8_20 = 0x12
                int32_t ebx_2 = var_1a0
                int32_t esi_9 = var_198 + ebx_2
                int32_t edi_8 = eax_74 + var_1ac
                int32_t xmm0_7 = _mm_cvtepi32_ps(zx.o(esi_9))
                int32_t* var_1d8_6 = &data_4ebe2d4
                var_194 = 2
                int16_t var_190_1 = 0x101
                float xmm2_2 = _mm_cvtepi32_ps(zx.o(edi_6))
                int32_t var_178_1 = xmm0_7
                int32_t xmm0_9 = _mm_cvtepi32_ps(zx.o(edi_8))
                float xmm1_2 = _mm_cvtepi32_ps(zx.o(ebx_1))
                int32_t var_174_1 = xmm0_9
                float var_184_1 = xmm2_2
                float var_160_1 = _mm_cvtepi32_ps(zx.o(var_1b0)) / xmm2_2
                float var_180_1 = xmm1_2
                float var_15c_1 = _mm_cvtepi32_ps(zx.o(eax_76)) / xmm1_2
                sub_54d950(&var_1d4, var_1d8_6)
                operator new(&var_194, var_1d4)
                sub_54d950(&var_1d4, &data_4ebe2ec)
                operator new[](&var_194)
                sub_54d950(&var_1d4, ebx + 0x1bc8)
                sub_6f1260(&var_194, nullptr)
                int32_t edx_8 = var_198
                var_1a0 = esi_9
                var_198 = edx_8
                int32_t* ecx_90 = &var_1a0
                
                if (edx_8 s>= esi_9)
                    ecx_90 = &var_198
                
                int32_t var_1a8 = 0
                int32_t* eax_89 = &var_1a8
                
                if (*ecx_90 s> 0)
                    eax_89 = ecx_90
                
                int32_t* ecx_91 = &var_1a8
                int32_t eax_90 = *eax_89
                var_1a0 = eax_74
                int32_t* eax_92 = &var_198
                
                if (eax_74 s>= edi_8)
                    ecx_91 = &var_1a0
                
                var_1a8 = edi_8
                int32_t esi_10 = var_1b0
                void* edi_9 = data_bac4a0
                var_198 = 0
                
                if (*ecx_91 s> 0)
                    eax_92 = ecx_91
                
                int32_t esi_11 = esi_10 + edx_8
                int32_t edx_9 = *(edi_9 + 0x30)
                int32_t* ecx_92 = &var_1a8
                var_1b0 = edx_9
                var_198 = *eax_92
                int32_t eax_94 = esi_11 + ebx_2
                var_1a8 = eax_94
                var_1a0 = esi_11
                int32_t* eax_95 = &var_1b0
                
                if (eax_94 s>= esi_11)
                    ecx_92 = &var_1a0
                
                int32_t edx_10 = *(edi_9 + 0x34)
                
                if (*ecx_92 s< edx_9)
                    eax_95 = ecx_92
                
                int32_t esi_13 = eax_76 + eax_74
                int32_t* ecx_93 = &var_1a8
                int32_t ebx_3 = *eax_95
                int32_t eax_97 = var_1ac + esi_13
                var_1a0 = esi_13
                var_1a8 = eax_97
                int32_t* eax_98 = &var_1ac
                var_1ac = edx_10
                
                if (eax_97 s>= esi_13)
                    ecx_93 = &var_1a0
                
                int32_t var_34_6 = ebx_3
                
                if (*ecx_93 s< edx_10)
                    eax_98 = ecx_93
                
                int32_t ecx_95 = var_198
                int32_t var_1d0_55 = ecx_95
                int32_t var_30_7 = *eax_98
                int32_t var_38_3 = ecx_95
                var_1d4 = &var_18
                int32_t var_1d8_10 = 0
                *(ebx + 0x1a60) = eax_90.o
                float ecx_97 = sub_6fd020(data_4ebe2d4, ecx_95, var_1d8_10)
                int32_t var_1d0_56 = 0
                var_1d4 = nullptr
                int32_t* var_1d8_11 = var_18
                var_1e4 = 0
                char eax_100 = sub_6f01c0(&var_194, 0, ecx_97, var_1e4, var_1e0)
                int32_t* ecx_99 = data_4ebe2d4
                
                if (eax_100 == 0)
                    sub_6fd140(ecx_99)
                label_611a98:
                    int32_t var_8_22 = 0xffffffff
                    sub_6efc80(&var_194)
                label_611aa4:
                    int32_t* eax_102 = *(ebx + 0x1b68)
                    *(ebx + 0x1b68) = 0
                    
                    if (eax_102 != 0)
                        (*(*eax_102 + 8))(eax_102)
                    
                    int32_t* eax_103 = *(ebx + 0x1b7c)
                    *(ebx + 0x1b7c) = 0
                    
                    if (eax_103 != 0)
                        (*(*eax_103 + 8))(eax_103)
                    
                    int32_t* eax_104 = *(ebx + 0x1b90)
                    *(ebx + 0x1b90) = 0
                    
                    if (eax_104 != 0)
                        (*(*eax_104 + 8))(eax_104)
                    
                    result = *(ebx + 0x1ba4)
                    *(ebx + 0x1ba4) = 0
                    
                    if (result != 0)
                        (*(*result + 8))(result)
                    
                    result.b = 1
                else
                    sub_6fd140(ecx_99)
                    int32_t* var_1d0_57 = &var_194
                    
                    if (sub_6133f0(ebx) != 0)
                        goto label_611a98
                    
                    int32_t var_8_21 = 0xffffffff
                    sub_6efc80(&var_194)
                    result.b = 0
        else
            void** eax_61 = sub_6b9ed0(&var_44)
            int32_t var_8_15 = 0xd
            var_1d4 = var_198
            int32_t var_1d8_4 = ecx_44
            sub_52e820(&var_1f0, 0xaf3aa0)
            void** eax_62 = sub_6ae4c0(&var_74, var_1f0)
            var_8_15.b = 0xe
            int32_t* eax_63 = sub_5327a0(eax_62, eax_62, &var_5c, eax_61)
            var_8_15.b = 0xf
            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_63 = data_bac424
            var_1d4 = 2
            sub_684160(ecx_63, var_1d4, eax_63)
            sub_52e8a0(&var_5c)
            sub_52e8a0(&var_74)
            sub_52e8a0(&var_44)
            result.b = 0
    else
        void** eax_57 = sub_6b9ed0(&var_5c)
        int32_t var_8_12 = 8
        var_1d4 = var_198
        int32_t var_1d8_2 = ecx_44
        sub_52e820(&var_1f0, 0xaf3a58)
        void** eax_58 = sub_6ae4c0(&var_74, var_1f0)
        var_8_12.b = 9
        int32_t* eax_59 = sub_5327a0(eax_58, eax_58, &var_44, eax_57)
        var_8_12.b = 0xa
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_51 = data_bac424
        var_1d4 = 2
        sub_684160(ecx_51, var_1d4, eax_59)
        sub_52e8a0(&var_44)
        sub_52e8a0(&var_74)
        sub_52e8a0(&var_5c)
        result.b = 0
else
    int16_t* eax_22
    int32_t edx_1
    eax_22, edx_1 = sub_52e820(&var_1e4, u"SetViewport")
    sub_6f1a40(eax_22, edx_1, eax_21, var_1e4)
    int16_t* eax_23 = sub_6b9ed0(&var_44)
    int32_t var_8_5 = 2
    int16_t* eax_24 = sub_548cb0(eax_23, 0xaf39f8, &var_2c, eax_23)
    var_8_5.b = 3
    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_13 = data_bac424
    var_1d4 = 2
    sub_684160(ecx_13, var_1d4, eax_24)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    var_18 = 7
    var_1c = nullptr
    var_2c = 0
    
    if (xmm0_2 u>= 8)
        j__free(var_44)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
