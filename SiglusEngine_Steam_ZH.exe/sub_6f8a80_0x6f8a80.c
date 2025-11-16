// 函数: sub_6f8a80
// 地址: 0x6f8a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9cdd49
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_50 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2[1].b == 0)
    result.b = 1
else
    int32_t* eax_7
    
    if (*(arg2 + 0xb) != 0)
        if (data_4ebe6ec != 1)
            int32_t* eax_5 = data_4ebe4b0
            data_4ebe6ec = 1
            (*(*eax_5 + 0xe4))(eax_5, 0xf, 1)
        
        if (data_4ebe714 != 7)
            int32_t* eax_6 = data_4ebe4b0
            data_4ebe714 = 7
            (*(*eax_6 + 0xe4))(eax_6, 0x19, 7)
        
        if (data_4ebe710 != 1)
            data_4ebe710 = 1
            eax_7 = data_4ebe4b0
            (*(*eax_7 + 0xe4))(eax_7, 0x18, 1)
    else if (data_4ebe6ec != 0)
        data_4ebe6ec = 0
        eax_7 = data_4ebe4b0
        (*(*eax_7 + 0xe4))(eax_7, 0xf, 0)
    int32_t* eax_8
    
    if (arg2[3].b == 0)
        if (data_4ebe71c != 0)
            data_4ebe71c = 0
            eax_8 = data_4ebe4b0
            (*(*eax_8 + 0xe4))(eax_8, 0x1b, 0)
    else if (data_4ebe71c != 1)
        data_4ebe71c = 1
        eax_8 = data_4ebe4b0
        (*(*eax_8 + 0xe4))(eax_8, 0x1b, 1)
    int32_t* eax_9
    
    if (*(arg2 + 0xa) == 0)
        if (data_4ebe708 != 1)
            data_4ebe708 = 1
            eax_9 = data_4ebe4b0
            (*(*eax_9 + 0xe4))(eax_9, 0x16, 1)
    else if (data_4ebe708 != 3)
        data_4ebe708 = 3
        eax_9 = data_4ebe4b0
        (*(*eax_9 + 0xe4))(eax_9, 0x16, 3)
    (*(*arg1 + 0x10))(&arg2[1])
    int128_t var_40
    
    if (*(arg2 + 5) == 0)
        int32_t var_7c_2
        int32_t var_78_6
        
        if (*(arg2 + 6) == 0)
            if (data_4ebe6cc != 1)
                int32_t* eax_28 = data_4ebe4b0
                data_4ebe6cc = 1
                (*(*eax_28 + 0xe4))(eax_28, 7, 1)
            
            int32_t* eax_29
            
            if (arg2[3].b != 0)
                if (data_4ebe6e8 != 0)
                    data_4ebe6e8 = 0
                    eax_29 = data_4ebe4b0
                    (*(*eax_29 + 0xe4))(eax_29, 0xe, 0)
            else if (data_4ebe6e8 != 1)
                data_4ebe6e8 = 1
                eax_29 = data_4ebe4b0
                (*(*eax_29 + 0xe4))(eax_29, 0xe, 1)
            int32_t* eax_30 = data_4ebe4b0
            (*(*eax_30 + 0x114))(eax_30, 0, 1, 3)
            int32_t* eax_31 = data_4ebe4b0
            (*(*eax_31 + 0x114))(eax_31, 0, 2, 3)
            int32_t* eax_32 = data_4ebe4b0
            (*(*eax_32 + 0x114))(eax_32, 0, 3, 3)
            var_78_6 = 0
            var_7c_2 = 4
        else
            if (data_4ebe6cc != 1)
                int32_t* eax_24 = data_4ebe4b0
                data_4ebe6cc = 1
                (*(*eax_24 + 0xe4))(eax_24, 7, 1)
            
            int32_t* eax_25
            
            if (arg2[3].b != 0)
                if (data_4ebe6e8 != 0)
                    data_4ebe6e8 = 0
                    eax_25 = data_4ebe4b0
                    (*(*eax_25 + 0xe4))(eax_25, 0xe, 0)
            else if (data_4ebe6e8 != 1)
                data_4ebe6e8 = 1
                eax_25 = data_4ebe4b0
                (*(*eax_25 + 0xe4))(eax_25, 0xe, 1)
            int32_t* eax_26 = data_4ebe4b0
            (*(*eax_26 + 0x114))(eax_26, 0, 1, 3)
            int32_t* eax_27 = data_4ebe4b0
            (*(*eax_27 + 0x114))(eax_27, 0, 2, 3)
            var_78_6 = 3
            var_7c_2 = 3
        
        int32_t* eax_33 = data_4ebe4b0
        (*(*eax_33 + 0x114))(eax_33, 0, var_7c_2, var_78_6)
    else
        if (data_4ebe6cc != 0)
            int32_t* eax_11 = data_4ebe4b0
            data_4ebe6cc = 0
            (*(*eax_11 + 0xe4))(eax_11, 7, 0)
        
        if (data_4ebe6e8 != 0)
            int32_t* eax_12 = data_4ebe4b0
            data_4ebe6e8 = 0
            (*(*eax_12 + 0xe4))(eax_12, 0xe, 0)
        
        int32_t* eax_13 = data_4ebe4b0
        (*(*eax_13 + 0x114))(eax_13, 0, 1, 3)
        int32_t* eax_14 = data_4ebe4b0
        (*(*eax_14 + 0x114))(eax_14, 0, 2, 3)
        int32_t* eax_15 = data_4ebe4b0
        (*(*eax_15 + 0x114))(eax_15, 0, 3, 3)
        int32_t* var_84_3
        
        if (arg2[2].b == 0)
            var_84_3.o = *(arg1 + 4)
            sub_6f6b60(&data_4ebe4b0, var_84_3)
        else
            int128_t xmm0_1 = *(arg2 + 0x5c)
            void* edx_1 = &var_40
            var_40 = xmm0_1
            
            if (xmm0_1 s< arg1[1])
                edx_1 = &arg1[1]
            
            void* edx_2 = &var_40:4
            var_40.d = *edx_1
            
            if (var_40:4.d s< arg1[2])
                edx_2 = &arg1[2]
            
            void* edx_3 = &var_40:8
            var_40:4.d = *edx_2
            
            if (arg1[3] s< var_40:8.d)
                edx_3 = &arg1[3]
            
            void* edx_4 = &var_40:0xc
            var_40:8.d = *edx_3
            
            if (arg1[4] s< var_40:0xc.d)
                edx_4 = &arg1[4]
            
            var_40:0xc.d = *edx_4
            var_84_3.o = var_40
            sub_6f6b60(&data_4ebe4b0, var_84_3)
    
    int32_t var_14_1 = 0
    int32_t* edx_5 = 1
    bool cond:0_1 = *sub_6f12f0(arg2, &var_40, 0) == 0
    void* var_58_1 = 1
    char var_59_1
    void* eax_36
    
    if (not(cond:0_1))
        edx_5 = 3
        var_59_1 = 1
        var_58_1 = 3
        void var_48
        eax_36.b = *(*sub_6f12f0(arg2, &var_48, 0) + 0x25)
    
    if (cond:0_1 || eax_36.b == 0)
        var_59_1 = 0
    
    if ((edx_5.b & 2) != 0)
        edx_5 &= 0xfffffffd
        var_58_1 = edx_5
        var_50 = edx_5
        int32_t* var_44
        
        if (var_44 != 0)
            bool cond:1_1 = var_44[1] != 1
            var_44[1] -= 1
            
            if (not(cond:1_1))
                (*(*var_44 + 4))(eax_4)
                bool cond:3_1 = var_44[2] != 1
                var_44[2] -= 1
                
                if (not(cond:3_1))
                    (*(*var_44 + 8))()
                
                edx_5 = var_58_1
    
    int32_t var_14_2 = 0xffffffff
    
    if ((edx_5.b & 1) != 0)
        int32_t* edi_2 = var_40:4.d
        var_58_1 = edx_5 & 0xfffffffe
        
        if (edi_2 != 0)
            bool cond:2_1 = edi_2[1] != 1
            edi_2[1]
            edi_2[1] -= 1
            
            if (not(cond:2_1))
                (*(*edi_2 + 4))(eax_4)
                int32_t ecx_32 = edi_2[2]
                edi_2[2] -= 1
                
                if (ecx_32 == 1)
                    (*(*edi_2 + 8))()
    
    int32_t var_80_12
    int32_t var_78_8
    int32_t* eax_47
    int32_t ecx_35
    
    if (var_59_1 == 0)
        int32_t* eax_48 = data_4ebe4b0
        (*(*eax_48 + 0x114))(eax_48, 0, 7, 0)
        var_78_8 = 0
        int32_t var_7c_8 = 7
        var_80_12 = 1
        eax_47 = data_4ebe4b0
        ecx_35 = *eax_47
    else if (sub_6f6de0() == 0)
        bool cond:4_1 = sub_6f6da0() == 0
        eax_47 = data_4ebe4b0
        ecx_35 = *eax_47
        
        if (cond:4_1)
            var_78_8 = 0
            int32_t var_7c_7 = 7
            var_80_12 = 0
        else
            var_78_8 = 1
            int32_t var_7c_6 = 7
            var_80_12 = 0
    else
        var_78_8 = 2
        int32_t var_7c_5 = 7
        var_80_12 = 0
        eax_47 = data_4ebe4b0
        ecx_35 = *eax_47
    
    (*(ecx_35 + 0x114))(eax_47, var_80_12, 7, var_78_8)
    int32_t* eax_49 = data_4ebe4b0
    (*(*eax_49 + 0x1ac))(eax_49, 0)
    
    for (int32_t i = 0; i s< 4; i += 1)
        int32_t* eax_50 = data_4ebe4b0
        (*(*eax_50 + 0x104))(eax_50, i, 0)
    
    result = *arg2
    
    if (result != 2)
        char var_59_2
        void* ecx_43
        
        if (result != 3)
            ecx_43 = var_58_1
            var_59_2 = 0
        else
            ecx_43 = var_58_1 | 4
            var_58_1 = ecx_43
            
            if (*sub_5f3150(arg2, &var_40) == 0)
                var_59_2 = 0
            else
                var_59_2 = 1
        
        if ((ecx_43.b & 4) != 0)
            var_58_1 = ecx_43 & 0xfffffffb
            sub_54b010(&var_40)
            ecx_43 = var_58_1
        
        if (var_59_2 == 0)
            char var_59_4
            
            if (*arg2 != 4)
                var_59_4 = 0
            else
                ecx_43 = var_58_1 | 8
                var_59_4 = 1
                
                if (*sub_6f5a20(arg2, &var_40) == 0)
                    var_59_4 = 0
            
            if ((ecx_43.b & 8) != 0)
                sub_54b010(&var_40)
            
            if (var_59_4 == 0)
                result.b = 1
            else
                sub_6f5a20(arg2, &var_50)
                int32_t var_14_5 = 2
                int32_t var_14_6 = 0xffffffff
                int32_t* ecx_54 = &var_50
                
                if ((*(*arg1 + 0x40))(arg2, &arg2[1], *var_50) != 0)
                    sub_54b010(ecx_54)
                    result.b = 1
                else
                    sub_54b010(ecx_54)
                    result.b = 0
        else
            int32_t var_14_3 = 1
            bool cond:5_1 = (*(*arg1 + 0x38))(arg2, &arg2[1], *sub_5f3150(arg2, &var_40)) == 0
            int32_t var_14_4 = 0xffffffff
            sub_54b010(&var_40)
            
            if (cond:5_1 == 0)
                result.b = 1
            else
                result.b = 0
    else if (*(arg2 + 5) != 0)
        result = (*(*arg1 + 0x30))(arg2, &arg2[1], arg3, arg4)
        
        if (result.b != 0)
            result.b = 1
    else if (*(arg2 + 7) != 0)
        result.b = 1
    else
        result = (*(*arg1 + 0x34))(arg2, &arg2[1], arg3, arg4)
        
        if (result.b != 0)
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_68)
return result
