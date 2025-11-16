// 函数: sub_68d8c0
// 地址: 0x68d8c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8cae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_15c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** var_130 = nullptr
int32_t var_12c = 0
int32_t var_128 = 0
int32_t var_8_1 = 0
void* result_1 = nullptr
int32_t var_138 = 0
int32_t var_134 = 0
var_8_1.b = 1
int32_t var_11c
int16_t* eax_3 = sub_6893c0(&var_11c)
var_8_1.b = 2
int16_t var_104
int16_t* eax_4 = sub_532b80(eax_3, &data_4ebe3c8, &var_104, &data_ad900c)
var_8_1.b = 3
int16_t var_ec
int16_t* eax_5 = sub_5327a0(eax_4, eax_4, &var_ec, eax_3)
var_8_1.b = 4
int16_t var_d4
int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_d4, &data_ad900c)
var_8_1.b = 5
var_8_1.b = 6
int16_t var_bc
bool var_11d = sub_6b7be0(sub_532b80(eax_6, eax_6, &var_bc, u"GameexeZH.dat"), &result_1) == 0
int32_t var_a8

if (var_a8 u>= 8)
    j__free(var_bc.d)

int32_t var_a8_1 = 7
int32_t var_ac = 0
var_bc = 0
int32_t var_c0

if (var_c0 u>= 8)
    j__free(var_d4.d)

int32_t var_c0_1 = 7
int32_t var_c4 = 0
var_d4 = 0
int32_t var_d8

if (var_d8 u>= 8)
    j__free(var_ec.d)

int32_t var_d8_1 = 7
int32_t var_dc = 0
var_ec = 0
int32_t var_f0

if (var_f0 u>= 8)
    j__free(var_104.d)

var_8_1.b = 1
int32_t var_f0_1 = 7
int32_t var_f4 = 0
var_104 = 0
int32_t var_108

if (var_108 u>= 8)
    j__free(var_11c)

char var_11d_1

if (var_11d == 0)
    void* result_2 = result_1
    void* const result_4 = result_2
    
    if (result_2 == var_138)
        result_4 = nullptr
    
    void* const result_3 = result_2
    
    if (result_2 == var_138)
        result_3 = nullptr
    
    void* esi_2 = var_138 - result_2
    void* eax_9 = result_3 + 8
    void* var_124_1 = eax_9
    void* i_3 = esi_2 - 8
    
    if (esi_2 != 8)
        if (*(result_4 + 4) != 0)
            eax_9.b = data_b5bbff
            int32_t ecx_8 = 0
            char var_1c_1 = eax_9.b
            eax_9.b = data_b5b9d5
            char var_1e_1 = eax_9.b
            eax_9.b = data_b5baf6
            char var_1f_1 = eax_9.b
            eax_9.b = data_b5b7e1
            char var_23_1 = eax_9.b
            eax_9.b = data_b5b993
            char var_21_1 = eax_9.b
            eax_9.b = data_b5b65b
            char var_16_1 = eax_9.b
            eax_9.b = data_b5b6db
            char var_1a_1 = eax_9.b
            eax_9.b = data_b5b4ad
            char var_15_1 = eax_9.b
            eax_9.b = data_b5bbd0
            char var_1d_1 = eax_9.b
            eax_9.b = data_b5ba3b
            char var_22_1 = eax_9.b
            eax_9.b = data_b5bb88
            char var_19_1 = eax_9.b
            eax_9.b = data_b5b816
            char var_24 = eax_9.b
            eax_9.b = data_b5b8a1
            char var_17_1 = eax_9.b
            eax_9.b = data_b5b5d1
            char var_20_1 = eax_9.b
            eax_9.b = data_b5b755
            char var_1b_1 = eax_9.b
            eax_9.b = data_b5b51d
            char var_18_1 = eax_9.b
            eax_9 = var_124_1
            void* edx_5 = eax_9
            
            if (i_3 s> 0)
                void* i_2 = i_3
                void* i
                
                do
                    eax_9.b = (&var_24)[ecx_8]
                    edx_5 += 1
                    *(edx_5 - 1) ^= eax_9.b
                    ecx_8 = (ecx_8 + 1) & 0x8000000f
                    
                    if (ecx_8 s< 0)
                        ecx_8 = ((ecx_8 - 1) | 0xfffffff0) + 1
                    
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                eax_9 = var_124_1
        
        void* ecx_12 = nullptr
        void* edx_6 = eax_9
        
        if (i_3 s> 0)
            void* i_1
            
            do
                eax_9.b = *(ecx_12 + 0xada7d0)
                edx_6 += 1
                *(edx_6 - 1) ^= eax_9.b
                ecx_12 = (ecx_12 + 1) & 0x800000ff
                
                if (ecx_12 s< 0)
                    ecx_12 = ((ecx_12 - 1) | 0xffffff00) + 1
                
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            eax_9 = var_124_1
        
        void* eax_10 = sub_71cd20(eax_9, nullptr)
        char* var_148 = nullptr
        int32_t var_144_1 = 0
        int32_t var_140_1 = 0
        var_8_1.b = 9
        sub_5979b0(&var_148, eax_10)
        char* ebx_1 = var_148
        char* edx_7 = ebx_1
        
        if (ebx_1 == var_144_1)
            edx_7 = nullptr
        
        sub_71cd20(var_124_1, edx_7)
        void* var_160_10 = var_124_1
        int32_t var_28_1 = 7
        int32_t ecx_19 = var_144_1
        
        if (ebx_1 == var_144_1)
            ecx_19 = 0
        
        int32_t var_2c_1 = 0
        char* eax_11 = ebx_1
        int16_t var_3c = 0
        
        if (ebx_1 == var_144_1)
            eax_11 = nullptr
        
        sub_5b2590(&var_3c, eax_11, ecx_19)
        var_8_1.b = 0xa
        sub_6ad780(&var_3c, &var_130)
        
        if (var_28_1 u>= 8)
            j__free(var_3c.d)
        
        int32_t var_28_2 = 7
        int32_t var_2c_2 = 0
        var_3c = 0
        var_8_1.b = 1
        
        if (ebx_1 != 0)
            j__free(ebx_1)
        
        ebx = var_130
    
    arg1[0x2937ff] = 0
    int32_t eax_15 = (var_12c - ebx) s/ 0x18
    
    if (eax_15 s<= 0)
    label_68de7f:
        var_11d_1 = 1
    else
        while (true)
            void* eax_18 = &ebx[arg1[0x2937ff] * 6]
            
            if (&arg1[0x293800] != eax_18)
                sub_52e3c0(&arg1[0x293800], eax_18, 0, 0xffffffff)
            
            int32_t var_40_1 = 7
            int32_t var_44_1 = 0
            int16_t var_54 = 0
            sub_52e720(&var_54, &data_aee7a0, 3)
            int32_t* ecx_26
            
            if (arg1[0x293805] u< 8)
                ecx_26 = &arg1[0x293800]
            else
                ecx_26 = arg1[0x293800]
            
            void* eax_20 = ecx_26 + (arg1[0x293804] << 1)
            int32_t* ecx_27
            
            if (arg1[0x293805] u< 8)
                ecx_27 = &arg1[0x293800]
            else
                ecx_27 = arg1[0x293800]
            
            int32_t var_70_1 = 7
            int32_t var_74_1 = 0
            int16_t var_84 = 0
            var_8_1.b = 0xc
            void* var_88_1 = eax_20
            int32_t* var_8c = ecx_27
            int32_t ecx_29 = sub_52e3c0(&var_84, &var_54, 0, 0xffffffff)
            var_8_1.b = 0xe
            
            if (var_40_1 u>= 8)
                ecx_29 = j__free(var_54.d)
            
            int32_t var_40_2 = 7
            var_54 = 0
            int32_t var_160_14 = ecx_29
            int32_t var_44_2 = 0
            
            if (sub_68df30(arg1, &var_8c) == 0)
                if (var_70_1 u>= 8)
                    j__free(var_84.d)
                
                break
            
            var_8_1.b = 1
            
            if (var_70_1 u>= 8)
                j__free(var_84.d)
            
            arg1[0x2937ff] += 1
            
            if (arg1[0x2937ff] s>= eax_15)
                goto label_68de7f
        
        var_11d_1 = 0
else
    int32_t var_90_1 = 7
    int32_t var_94_1 = 0
    int16_t var_a4 = 0
    sub_52e720(&var_a4, &data_ad7c90, nullptr)
    var_8_1.b = 7
    int32_t var_58_1 = 7
    int32_t var_5c_1 = 0
    int16_t var_6c = 0
    sub_52e720(&var_6c, u"GameexeZH.dat", 0x18)
    var_8_1.b = 8
    sub_6b9da0(&var_6c, &var_a4)
    
    if (var_58_1 u>= 8)
        j__free(var_6c.d)
    
    int32_t var_58_2 = 7
    int32_t var_5c_2 = 0
    var_6c = 0
    
    if (var_90_1 u< 8)
        var_11d_1 = 0
    else
        j__free(var_a4.d)
        var_11d_1 = 0

void* result = result_1

if (result != 0)
    j__free(result)

if (ebx != 0)
    int32_t* esi_5 = ebx
    
    if (ebx != var_12c)
        do
            if (esi_5[5] u>= 8)
                j__free(*esi_5)
            
            esi_5[5] = 7
            esi_5[4] = 0
            *esi_5 = 0
            esi_5 = &esi_5[6]
        while (esi_5 != var_12c)
    
    j__free(ebx)

result.b = var_11d_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
