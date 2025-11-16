// 函数: sub_5db450
// 地址: 0x5db450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc470
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[8].b == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

arg1[9] = 2
int32_t eax_4 = data_4ebe2bc
int32_t* eax_5 = data_4ebe2c0

if (eax_5 != 0)
    eax_5[1]
    eax_5[1] += 1

operator new(&arg1[9], eax_4, eax_5)
int32_t eax_7 = data_4ebe2ec
int32_t* eax_8 = data_4ebe2f0

if (eax_8 != 0)
    eax_8[1]
    eax_8[1] += 1

operator new[](&arg1[9], eax_7, eax_8)
int32_t eax_10 = data_bac510
float var_14 = -nanf
int32_t ecx_6
ecx_6.b = arg8 != 0
int32_t var_110_2 = ecx_6
eax_10.b = *(eax_10 + 0x10bd8) == 1
int32_t* var_34
sub_69cf70(&var_34, *arg1, arg1[1], arg1[2], var_14, ecx_6, eax_10.b)
int32_t var_8_1 = 0
int32_t* var_2c = var_34
int32_t* var_30

if (var_30 != 0)
    var_30[1]
    var_30[1] += 1

var_8_1.b = 1
sub_5b17d0(&arg1[0x3f], &var_2c)
var_8_1.b = 0

if (var_30 != 0)
    bool cond:2_1 = var_30[1] != 1
    var_30[1]
    var_30[1] -= 1
    
    if (not(cond:2_1))
        (*(*var_30 + 4))(eax_2)
        bool cond:3_1 = var_30[2] != 1
        var_30[2]
        var_30[2] -= 1
        
        if (not(cond:3_1))
            (*(*var_30 + 8))()

int32_t* eax_14
bool ebx_1

if (var_34 != 0)
    void var_3c
    bool edx_2 = *sub_6f12f0(&arg1[9], &var_3c, 0) != 0
    int32_t* var_38
    
    if (var_38 != 0)
        bool cond:4_1 = var_38[1] != 1
        var_38[1]
        var_38[1] -= 1
        
        if (not(cond:4_1))
            (*(*var_38 + 4))(eax_2)
            bool cond:5_1 = var_38[2] != 1
            var_38[2]
            var_38[2] -= 1
            
            if (not(cond:5_1))
                (*(*var_38 + 8))()
            
            edx_2 = edx_2
    
    int32_t var_fc
    float var_1c
    
    if (edx_2 != 0)
        FI::`default constructor closure'(&var_fc)
        void* eax_22 = data_bac510
        var_fc = 1
        int32_t var_f4_1 = 0
        int32_t var_f0_1 = *(eax_22 + 0xa2ebb0)
        int32_t eax_27 = arg1[7] + arg11
        int32_t var_e8_1 = _mm_cvtepi32_ps(zx.o(arg1[6] + arg10))
        int32_t var_74_1 = arg3
        int32_t var_e4_1 = _mm_cvtepi32_ps(zx.o(eax_27))
        sub_6289b0(&var_fc, arg2)
        sub_628eb0(&arg1[0xa], &arg1[0x51], &var_fc, &arg1[0xa])
        int32_t edi_2 = *arg1
        *(arg1 + 0x29) = 1
        arg1[0xf] = 0
        
        if (edi_2 != 1)
            int16_t eax_30
            
            if (arg4 s<= 0)
                sub_5b26b0(&var_1c, arg1[3])
                char eax_31
                
                if (edi_2 == 0)
                    var_14 = -nanf
                    eax_31 = sub_5dbce0(&var_1c, &var_14)
                
                if (edi_2 != 0 || eax_31 == 0)
                    *(arg1 + 0xa7) = var_1c.w.b
                    eax_30.b = var_1c:2.b
                    arg1[0x2a].b = 0xff
                    *(arg1 + 0xa5) = eax_30.b
                    *(arg1 + 0xa6) = eax_30:1.b
            else
                *(arg1 + 0xa7) = arg5.w.b
                eax_30.b = arg5:2.b
                arg1[0x2a].b = arg4.b
                *(arg1 + 0xa5) = eax_30.b
                *(arg1 + 0xa6) = eax_30:1.b
    
    void* eax_57 = data_bac4a0
    int32_t ecx_21 = *(eax_57 + 0x194)
    char arg_20
    
    if (ecx_21 == 1 || ecx_21 == 3)
        ecx_21.b = arg_20
        
        if (ecx_21.b == 0)
            goto label_5dba25
        
        arg1[0x55] = 2
        int32_t eax_32 = data_4ebe2bc
        int32_t* eax_33 = data_4ebe2c0
        
        if (eax_33 != 0)
            eax_33[1]
            eax_33[1] += 1
        
        operator new(&arg1[0x55], eax_32, eax_33)
        int32_t eax_35 = data_4ebe2ec
        int32_t* eax_36 = data_4ebe2f0
        
        if (eax_36 != 0)
            eax_36[1]
            eax_36[1] += 1
        
        operator new[](&arg1[0x55], eax_35, eax_36)
        void* ecx_27
        
        if (arg8 == 0 || *arg1 != 0)
            ecx_27 = nullptr
            
            if (*(data_bac4a0 + 0x194) == 3)
                ecx_27 = 2
        else
            int32_t ecx_26
            ecx_26.b = *(data_bac4a0 + 0x194) == 3
            ecx_27 = (ecx_26 << 1) + 1
        
        void* eax_40 = data_bac510
        void* var_110_9 = ecx_27
        var_14 = -nanf
        eax_40.b = *(eax_40 + 0x10bd8) == 1
        sub_69cf70(&var_2c, *arg1, arg1[1], arg1[2], var_14, ecx_27, eax_40.b)
        var_8_1.b = 2
        int32_t* eax_42 = var_2c
        int32_t* var_110_10 = var_30
        
        if (var_30 != 0)
            var_30[1]
            var_30[1] += 1
        
        sub_6f1260(&arg1[0x55], nullptr, eax_42)
        
        if (var_2c != 0)
            void var_20
            ebx_1 = *sub_6f12f0(&arg1[0x55], &var_20, 0) != 0
            sub_54b010(&var_20)
            
            if (ebx_1 != 0)
                int32_t eax_47 = arg1[2]
                float xmm0_14
                
                if (*(data_bac4a0 + 0x194) != 3)
                    int32_t edx_6
                    
                    if (eax_47 s>= 0)
                        edx_6 = eax_47
                        
                        if (eax_47 s> 0x20)
                            edx_6 = 0x20
                    else
                        edx_6 = 0
                    
                    var_1c = _mm_cvtepi32_ps(zx.o(edx_6)) * 1.5f * 0.03125f + 0.5f
                    
                    if (eax_47 s< 0)
                        eax_47 = 0
                    else if (eax_47 s> 0x20)
                        eax_47 = 0x20
                    
                    xmm0_14 = _mm_cvtepi32_ps(zx.o(eax_47)) * 1.5f * 0.03125f + 0.5f
                else
                    int32_t edx_5
                    
                    if (eax_47 s>= 0)
                        edx_5 = eax_47
                        
                        if (eax_47 s> 0x20)
                            edx_5 = 0x20
                    else
                        edx_5 = 0
                    
                    var_1c = _mm_cvtepi32_ps(zx.o(edx_5)) * 0.03125f + 0.5f - 1f
                    
                    if (eax_47 s< 0)
                        eax_47 = 0
                    else if (eax_47 s> 0x20)
                        eax_47 = 0x20
                    
                    xmm0_14 = _mm_cvtepi32_ps(zx.o(eax_47)) * 0.03125f + 0.5f - 1f
                
                var_14 = xmm0_14
                sub_553440(&var_fc)
                void* eax_48 = data_bac510
                var_fc = 1
                int32_t var_f4_2 = 0
                int32_t var_f0_2 = *(eax_48 + 0xa2eba8)
                int32_t eax_53 = arg1[7] + arg11
                float var_e8_2 = _mm_cvtepi32_ps(zx.o(arg1[6] + arg10)) + var_1c
                int32_t var_74_2 = arg3
                float var_e4_2 = _mm_cvtepi32_ps(zx.o(eax_53)) + var_14
                sub_6289b0(&var_fc, arg2)
                sub_628eb0(&arg1[0x56], &arg1[0x9d], &var_fc, &arg1[0x56])
                *(arg1 + 0x159) = 1
                arg1[0x5b] = 0
                int16_t eax_56
                
                if (arg4 s<= 0)
                    sub_5b26b0(&var_1c, arg1[4])
                    *(arg1 + 0x1d7) = var_1c.w.b
                    eax_56.b = var_1c:2.b
                    arg1[0x76].b = 0xff
                else
                    *(arg1 + 0x1d7) = arg6.w.b
                    eax_56.b = arg6:2.b
                    arg1[0x76].b = arg4.b
                
                *(arg1 + 0x1d5) = eax_56.b
                *(arg1 + 0x1d6) = eax_56:1.b
            
            var_8_1.b = 0
            sub_54b010(&var_2c)
            eax_57 = data_bac4a0
            goto label_5dba22
        
        var_8_1.b = 0
        sub_54b010(&var_2c)
        ebx_1 = false
    else
    label_5dba22:
        ecx_21.b = arg_20
    label_5dba25:
        eax_14 = *(eax_57 + 0x194)
        
        if (eax_14 == 2)
            if (ecx_21.b != 0)
                goto label_5dba44
            
            ebx_1 = true
        else if (eax_14 != 3 || ecx_21.b == 0)
            ebx_1 = true
        else
        label_5dba44:
            arg1[0xa1] = 2
            int32_t eax_58 = data_4ebe2bc
            int32_t* eax_59 = data_4ebe2c0
            
            if (eax_59 != 0)
                eax_59[1]
                eax_59[1] += 1
            
            operator new(&arg1[0xa1], eax_58, eax_59)
            int32_t eax_61 = data_4ebe2ec
            int32_t* eax_62 = data_4ebe2f0
            
            if (eax_62 != 0)
                eax_62[1]
                eax_62[1] += 1
            
            operator new[](&arg1[0xa1], eax_61, eax_62)
            int32_t ecx_42
            
            if (arg8 != 0)
                ecx_42 = 3
            
            if (arg8 == 0 || *arg1 != 0)
                ecx_42 = 2
            
            int32_t var_110_15 = ecx_42
            arg_20.d = 0xffffffff
            void* eax_64
            eax_64.b = *(data_bac510 + 0x10bd8) == 1
            sub_69cf70(&var_2c, *arg1, arg1[1], arg1[2], arg_20.d, ecx_42, eax_64.b)
            var_8_1.b = 3
            int32_t* eax_66 = var_2c
            int32_t* var_110_16 = var_30
            
            if (var_30 != 0)
                var_30[1]
                var_30[1] += 1
            
            sub_6f1260(&arg1[0xa1], nullptr, eax_66)
            
            if (var_2c != 0)
                ebx_1 = *sub_6f12f0(&arg1[0xa1], &var_3c, 0) != 0
                sub_54b010(&var_3c)
                
                if (ebx_1 != 0)
                    sub_553440(&var_fc)
                    int32_t eax_70 = data_bac510
                    var_fc = 1
                    int32_t var_f4_3 = 0
                    int32_t var_f0_3 = *(eax_70 + &data_a2ebac)
                    int32_t eax_75 = arg1[7] + arg11
                    float var_e8_3 = _mm_cvtepi32_ps(zx.o(arg1[6] + arg10)) - 1f
                    int32_t var_74_3 = arg3
                    float var_e4_3 = _mm_cvtepi32_ps(zx.o(eax_75)) - 1f
                    sub_6289b0(&var_fc, arg2)
                    sub_628eb0(&arg1[0xa2], &arg1[0xe9], &var_fc, &arg1[0xa2])
                    *(arg1 + 0x289) = 1
                    arg1[0xa7] = 0
                    int16_t eax_78
                    
                    if (arg4 s<= 0)
                        sub_5b26b0(&arg_20, arg1[5])
                        *(arg1 + 0x307) = (arg_20.d).w.b
                        eax_78.b = arg9
                        arg1[0xc2].b = 0xff
                    else
                        *(arg1 + 0x307) = arg7.w.b
                        eax_78.b = arg7:2.b
                        arg1[0xc2].b = arg4.b
                    
                    *(arg1 + 0x305) = eax_78.b
                    *(arg1 + 0x306) = eax_78:1.b
                
                var_8_1.b = 0
                sub_54b010(&var_2c)
                ebx_1 = true
            else
                var_8_1.b = 0
                sub_54b010(&var_2c)
                ebx_1 = false
else
    ebx_1 = false

int32_t var_8_2 = 0xffffffff

if (var_30 != 0)
    bool cond:6_1 = var_30[1] != 1
    var_30[1]
    var_30[1] -= 1
    
    if (not(cond:6_1))
        (*(*var_30 + 4))(eax_2)
        int32_t edi_3 = var_30[2]
        var_30[2] -= 1
        
        if (edi_3 == 1)
            (*(*var_30 + 8))()

eax_14.b = ebx_1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_14
