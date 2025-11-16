// 函数: sub_697330
// 地址: 0x697330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c909c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* var_1b4 = edi
int32_t eax_3 = *edi
void** edx = data_bac4d8
edi[1] = eax_3
int32_t var_18c
int16_t* eax_4 = sub_532b80(eax_3, edx, &var_18c, &data_ad900c)
int32_t var_8_1 = 0
int16_t var_15c
int16_t* eax_5 = sub_5327a0(eax_4, eax_4, &var_15c, data_bac4d8 + 0x78)
var_8_1.b = 1
int16_t var_144
int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_144, &data_ad900c)
var_8_1.b = 2
void* var_174
sub_5327a0(eax_6, eax_6, &var_174, arg2)
int32_t var_130

if (var_130 u>= 8)
    j__free(var_144.d)

int32_t var_130_1 = 7
int32_t var_134 = 0
var_144 = 0
int32_t var_148

if (var_148 u>= 8)
    j__free(var_15c.d)

int32_t var_148_1 = 7
int32_t var_14c = 0
var_15c = 0
int32_t var_178

if (var_178 u>= 8)
    j__free(var_18c)

int32_t* result_1 = nullptr
int32_t var_1a8 = 0
int32_t var_1a4 = 0
var_8_1.b = 7
void* ebx

if (sub_6b7be0(&var_174, &result_1) != 0)
    int32_t* result_6 = result_1
    int32_t esi_1 = var_1a8
    
    if (result_6 == esi_1)
        result_6 = nullptr
    
    char var_28
    
    if (result_6[0x15] != 0)
        char var_20_1 = data_b5bbff
        char var_22_1 = data_b5b9d5
        char var_23_1 = data_b5baf6
        char var_27_1 = data_b5b7e1
        char var_25_1 = data_b5b993
        char var_1a_1 = data_b5b65b
        char var_1e_1 = data_b5b6db
        char var_19_1 = data_b5b4ad
        char var_21_1 = data_b5bbd0
        char var_26_1 = data_b5ba3b
        char var_1d_1 = data_b5bb88
        var_28 = data_b5b816
        char var_1b_1 = data_b5b8a1
        char var_24_1 = data_b5b5d1
        char var_1f_1 = data_b5b755
        esi_1 = var_1a8
        char var_1c_1 = data_b5b51d
    
    sub_5979b0(edi, result_6[0x13])
    int32_t* result_3 = result_1
    int32_t* eax_9 = *edi
    
    if (result_3 == esi_1)
        result_3 = nullptr
    
    if (eax_9 == edi[1])
        eax_9 = nullptr
    
    sub_748840(eax_9, result_3, result_6[0x13], eax_2)
    int32_t* result_2 = result_1
    int32_t i_5 = 0
    
    if (result_2 == esi_1)
        result_2 = nullptr
    
    int32_t* result_9 = result_6
    void* ecx_9 = result_9[0x11] + result_2
    void* var_190_1 = *ecx_9
    void* var_194
    
    if (result_9[0x14] s> 0)
        int32_t* esi_2 = ecx_9 + 4
        int32_t* var_1b0_1 = esi_2
        var_194 = 0xfffffffc - ecx_9
        int32_t i
        
        do
            void* j_10 = *esi_2
            
            if (j_10 s<= 0)
                j_10 = nullptr
            else
                int32_t* result_4 = result_1
                int32_t* result_7 = result_4
                
                if (result_4 == var_1a8)
                    result_7 = nullptr
                
                void* esi_5 = esi_2[-1] + result_9[0x13] + result_7
                void* var_198_1 = esi_5
                
                if (result_9[0x16] s<= 0)
                    sub_5979b0(edi, j_10 - *edi + edi[1])
                    int32_t* result_5 = result_1
                    int32_t* result_8 = result_5
                    esi_2 = var_1b0_1
                    
                    if (result_5 == var_1a8)
                        result_8 = nullptr
                    
                    int32_t ecx_28 = result_6[0x13]
                    void* const eax_16 = *edi
                    
                    if (eax_16 == edi[1])
                        eax_16 = nullptr
                    
                    sub_748840(eax_16 + ecx_28 + var_190_1, esi_2[-1] + ecx_28 + result_8, *esi_2)
                    result_9 = result_6
                else
                    if (result_9[0x15] != 0)
                        int32_t ecx_11 = 0
                        void* edx_5 = esi_5
                        
                        if (j_10 s> 0)
                            void* j_7 = j_10
                            void* j
                            
                            do
                                result_7.b = (&var_28)[ecx_11]
                                edx_5 += 1
                                *(edx_5 - 1) ^= result_7.b
                                ecx_11 = (ecx_11 + 1) & 0x8000000f
                                
                                if (ecx_11 s< 0)
                                    ecx_11 = ((ecx_11 - 1) | 0xfffffff0) + 1
                                
                                j = j_7
                                j_7 -= 1
                            while (j != 1)
                            esi_5 = var_198_1
                    
                    void* ecx_15 = nullptr
                    void* edx_6 = esi_5
                    
                    if (j_10 s> 0)
                        void* j_6 = j_10
                        void* j_1
                        
                        do
                            result_7.b = *(ecx_15 + 0xada8d0)
                            edx_6 += 1
                            *(edx_6 - 1) ^= result_7.b
                            ecx_15 = (ecx_15 + 1) & 0x800000ff
                            
                            if (ecx_15 s< 0)
                                ecx_15 = ((ecx_15 - 1) | 0xffffff00) + 1
                            
                            j_1 = j_6
                            j_6 -= 1
                        while (j_1 != 1)
                    
                    j_10 = sub_71cd20(esi_5, nullptr)
                    sub_5979b0(edi, j_10 - *edi + edi[1])
                    int32_t esi_6 = *edi
                    
                    if (esi_6 == edi[1])
                        esi_6 = 0
                    
                    sub_71cd20(var_198_1, result_6[0x13] + esi_6 + var_190_1)
                    result_9 = result_6
                    esi_2 = var_1b0_1
            
            int32_t eax_19 = *edi
            void* edi_1 = var_190_1
            
            if (eax_19 == edi[1])
                eax_19 = 0
            
            var_190_1 += j_10
            int32_t ecx_30 = result_9[0x11] + eax_19
            int32_t* eax_21 = var_194 + esi_2
            esi_2 = &esi_2[2]
            var_1b0_1 = esi_2
            *(eax_21 + ecx_30) = edi_1
            edi = var_1b4
            *(eax_21 + ecx_30 + 4) = j_10
            i = i_5 + 1
            i_5 = i
        while (i s< result_9[0x14])
    
    void* const ecx_31 = *edi
    void* const edx_13 = ecx_31
    
    if (ecx_31 == edi[1])
        edx_13 = nullptr
    
    bool cond:4_1 = ecx_31 == edi[1]
    edi[4] = edx_13
    
    if (cond:4_1)
        ecx_31 = nullptr
    
    int32_t i_1 = 0
    edi[3] = ecx_31
    edi[5] = *(edx_13 + 4) + edx_13
    edi[6] = *(edx_13 + 0xc) + edx_13
    edi[7] = *(edx_13 + 0x14) + edx_13
    edi[0xa] = *(edx_13 + 0x1c) + edx_13
    edi[8] = *(edx_13 + 0x24) + edx_13
    edi[9] = *(edx_13 + 0x2c) + edx_13
    edi[0xb] = *(edx_13 + 0x34) + edx_13
    edi[0xc] = *(edx_13 + 0x3c) + edx_13
    edi[0xd] = *(edx_13 + 0x44) + edx_13
    edi[0xe] = *(edx_13 + 0x4c) + edx_13
    
    if (*(edx_13 + 0x40) s> 0)
        do
            int32_t eax_43 = edi[0xb]
            int32_t edx_14 = edi[0xc]
            void* var_1f4_10 = var_194
            int32_t var_b8_1 = 7
            int32_t ecx_32 = *(eax_43 + (i_1 << 3))
            int32_t eax_45 = *(eax_43 + (i_1 << 3) + 4) + ecx_32
            int32_t var_bc_1 = 0
            int16_t var_cc = 0
            sub_5b2590(&var_cc, edx_14 + (ecx_32 << 1), edx_14 + (eax_45 << 1))
            var_8_1.b = 8
            int16_t var_98 = 0
            int32_t var_84_1 = 7
            int32_t var_88_1 = 0
            sub_52e3c0(&var_98, &var_cc, 0, 0xffffffff)
            int32_t i_7 = i_1
            var_8_1.b = 9
            int32_t* eax_47
            void* ecx_36
            eax_47, ecx_36 = sub_5c37c0(&var_98)
            int32_t* var_1f4_12 = eax_47
            void* var_1f8_4 = &eax_47[4]
            void* var_1bc
            sub_5c3870(&edi[0xf], &var_1bc, ecx_36)
            
            if (var_84_1 u>= 8)
                j__free(var_98.d)
            
            var_8_1.b = 7
            int32_t var_84_2 = 7
            int32_t var_88_2 = 0
            var_98 = 0
            
            if (var_b8_1 u>= 8)
                j__free(var_cc.d)
            
            i_1 += 1
        while (i_1 s< *(edi[4] + 0x40))
    
    int32_t i_2 = 0
    
    if (*(edi[4] + 0x18) s> 0)
        do
            int32_t eax_51 = edi[6]
            int32_t edx_15 = edi[7]
            void* var_1f4_15 = var_194
            int32_t var_e8_1 = 7
            int32_t ecx_38 = *(eax_51 + (i_2 << 3))
            int32_t eax_53 = *(eax_51 + (i_2 << 3) + 4) + ecx_38
            int32_t var_ec_1 = 0
            int16_t var_fc = 0
            sub_5b2590(&var_fc, edx_15 + (ecx_38 << 1), edx_15 + (eax_53 << 1))
            var_8_1.b = 0xa
            int16_t var_44 = 0
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            sub_52e3c0(&var_44, &var_fc, 0, 0xffffffff)
            int32_t i_9 = i_2
            var_8_1.b = 0xb
            int32_t* eax_55
            void* ecx_42
            eax_55, ecx_42 = sub_5c37c0(&var_44)
            int32_t* var_1f4_17 = eax_55
            void* var_1f8_6 = &eax_55[4]
            void* var_1c4
            sub_5c3870(&edi[0x11], &var_1c4, ecx_42)
            
            if (var_30_1 u>= 8)
                j__free(var_44.d)
            
            var_8_1.b = 7
            int32_t var_30_2 = 7
            int32_t var_34_2 = 0
            var_44 = 0
            
            if (var_e8_1 u>= 8)
                j__free(var_fc.d)
            
            i_2 += 1
        while (i_2 s< *(edi[4] + 0x18))
    
    int32_t i_3 = 0
    
    if (*(edi[4] + 0x30) s> 0)
        do
            int32_t eax_59 = edi[8]
            int32_t edx_16 = edi[9]
            void* var_1f4_20 = var_194
            int32_t var_118_1 = 7
            int32_t ecx_44 = *(eax_59 + (i_3 << 3))
            int32_t eax_61 = *(eax_59 + (i_3 << 3) + 4) + ecx_44
            int32_t var_11c_1 = 0
            int16_t var_12c = 0
            sub_5b2590(&var_12c, edx_16 + (ecx_44 << 1), edx_16 + (eax_61 << 1))
            var_8_1.b = 0xc
            int16_t var_7c = 0
            int32_t var_68_1 = 7
            int32_t var_6c_1 = 0
            sub_52e3c0(&var_7c, &var_12c, 0, 0xffffffff)
            int32_t i_8 = i_3
            var_8_1.b = 0xd
            int32_t* eax_63
            void* ecx_48
            eax_63, ecx_48 = sub_5c37c0(&var_7c)
            int32_t* var_1f4_22 = eax_63
            void* var_1f8_8 = &eax_63[4]
            void* var_1dc
            sub_5c3870(&edi[0x13], &var_1dc, ecx_48)
            
            if (var_68_1 u>= 8)
                j__free(var_7c.d)
            
            var_8_1.b = 7
            int32_t var_68_2 = 7
            int32_t var_6c_2 = 0
            var_7c = 0
            
            if (var_118_1 u>= 8)
                j__free(var_12c.d)
            
            i_3 += 1
        while (i_3 s< *(edi[4] + 0x30))
    
    ebx = &edi[0x15]
    sub_6985b0(ebx, *(edi[4] + 0x50))
    int32_t i_4 = 0
    int32_t i_6 = 0
    
    if (*(edi[4] + 0x50) s> 0)
        int32_t* esi_10 = nullptr
        
        do
            void* edx_18 = *(edi[0xd] + (i_4 << 3)) + edi[0xe]
            int32_t j_2 = 0
            int32_t j_4 = 0
            *(*ebx + esi_10 + 4) = edx_18
            *(esi_10 + *ebx) = edx_18
            *(*ebx + esi_10 + 8) = *(edx_18 + 4) + edx_18
            *(*ebx + esi_10 + 0x14) = *(edx_18 + 0xc) + edx_18
            *(*ebx + esi_10 + 0x18) = *(edx_18 + 0x14) + edx_18
            *(*ebx + esi_10 + 0xc) = *(edx_18 + 0x1c) + edx_18
            *(*ebx + esi_10 + 0x10) = *(edx_18 + 0x24) + edx_18
            *(*ebx + esi_10 + 0x1c) = *(edx_18 + 0x34) + edx_18
            *(*ebx + esi_10 + 0x20) = *(edx_18 + 0x3c) + edx_18
            *(*ebx + esi_10 + 0x24) = *(edx_18 + 0x44) + edx_18
            *(*ebx + esi_10 + 0x30) = *(edx_18 + 0x4c) + edx_18
            *(*ebx + esi_10 + 0x34) = *(edx_18 + 0x54) + edx_18
            *(*ebx + esi_10 + 0x38) = *(edx_18 + 0x5c) + edx_18
            *(*ebx + esi_10 + 0x28) = *(edx_18 + 0x64) + edx_18
            *(*ebx + esi_10 + 0x2c) = *(edx_18 + 0x6c) + edx_18
            *(*ebx + esi_10 + 0x3c) = *(edx_18 + 0x74) + edx_18
            *(*ebx + esi_10 + 0x40) = *(edx_18 + 0x7c) + edx_18
            
            if (*(*(*ebx + esi_10 + 4) + 0x48) s> 0)
                do
                    int32_t ecx_81 = *ebx
                    void* var_1f4_26 = var_194
                    int32_t var_d0_1 = 7
                    int32_t var_d4_1 = 0
                    int32_t eax_88 = *(ecx_81 + esi_10 + 0x20)
                    int32_t edx_19 = *(ecx_81 + esi_10 + 0x24)
                    int32_t ecx_82 = *(eax_88 + (j_2 << 3))
                    int32_t eax_90 = *(eax_88 + (j_4 << 3) + 4) + ecx_82
                    int16_t var_e4 = 0
                    sub_5b2590(&var_e4, edx_19 + (ecx_82 << 1), edx_19 + (eax_90 << 1))
                    var_8_1.b = 0xe
                    int16_t var_b4 = 0
                    int32_t var_a0_1 = 7
                    int32_t var_a4_1 = 0
                    sub_52e3c0(&var_b4, &var_e4, 0, 0xffffffff)
                    int32_t j_8 = j_4
                    var_8_1.b = 0xf
                    int32_t edi_4 = *ebx
                    int32_t* eax_93
                    void* ecx_87
                    eax_93, ecx_87 = sub_5c37c0(&var_b4)
                    int32_t* var_1f4_28 = eax_93
                    void* var_1f8_10 = &eax_93[4]
                    void* var_1d4
                    sub_5c3870(&esi_10[0x11] + edi_4, &var_1d4, ecx_87)
                    
                    if (var_a0_1 u>= 8)
                        j__free(var_b4.d)
                    
                    var_8_1.b = 7
                    int32_t var_a0_2 = 7
                    int32_t var_a4_2 = 0
                    var_b4 = 0
                    
                    if (var_d0_1 u>= 8)
                        j__free(var_e4.d)
                    
                    j_2 = j_4 + 1
                    j_4 = j_2
                while (j_2 s< *(*(*ebx + esi_10 + 4) + 0x48))
            
            int32_t j_3 = 0
            int32_t j_5 = 0
            
            if (*(*(*ebx + esi_10 + 4) + 0x60) s> 0)
                do
                    int32_t ecx_90 = *ebx
                    void* var_1f4_31 = var_194
                    int32_t var_100_1 = 7
                    int32_t var_104_1 = 0
                    int32_t eax_99 = *(ecx_90 + esi_10 + 0x34)
                    int32_t edx_20 = *(ecx_90 + esi_10 + 0x38)
                    int32_t ecx_91 = *(eax_99 + (j_3 << 3))
                    int32_t eax_101 = *(eax_99 + (j_5 << 3) + 4) + ecx_91
                    int16_t var_114 = 0
                    sub_5b2590(&var_114, edx_20 + (ecx_91 << 1), edx_20 + (eax_101 << 1))
                    var_8_1.b = 0x10
                    int16_t var_60 = 0
                    int32_t var_4c_1 = 7
                    int32_t var_50_1 = 0
                    sub_52e3c0(&var_60, &var_114, 0, 0xffffffff)
                    int32_t j_9 = j_5
                    var_8_1.b = 0x11
                    int32_t edi_8 = *ebx
                    int32_t* eax_104
                    void* ecx_96
                    eax_104, ecx_96 = sub_5c37c0(&var_60)
                    int32_t* var_1f4_33 = eax_104
                    void* var_1f8_12 = &eax_104[4]
                    void* var_1cc
                    sub_5c3870(&esi_10[0x13] + edi_8, &var_1cc, ecx_96)
                    
                    if (var_4c_1 u>= 8)
                        j__free(var_60.d)
                    
                    var_8_1.b = 7
                    int32_t var_4c_2 = 7
                    int32_t var_50_2 = 0
                    var_60 = 0
                    
                    if (var_100_1 u>= 8)
                        j__free(var_114.d)
                    
                    j_3 = j_5 + 1
                    j_5 = j_3
                while (j_3 s< *(*(*ebx + esi_10 + 4) + 0x60))
            
            edi = var_1b4
            esi_10 = &esi_10[0x15]
            i_4 = i_6 + 1
            i_6 = i_4
        while (i_4 s< *(edi[4] + 0x50))
    
    ebx.b = 1
else
    ebx.b = 0

int32_t* result = result_1

if (result != 0)
    j__free(result)

int32_t var_160

if (var_160 u>= 8)
    j__free(var_174)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
