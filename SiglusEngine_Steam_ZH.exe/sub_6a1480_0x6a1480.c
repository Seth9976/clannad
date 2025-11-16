// 函数: sub_6a1480
// 地址: 0x6a1480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9d23
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_bc = arg1
int32_t var_b0 = 0
int32_t* var_a8
int32_t eax_5
int32_t ecx_1
int32_t* esi_1

if (arg3 == 0)
    esi_1 = nullptr
    ecx_1 = data_4ebe29c
    eax_5 = data_4ebe2a0 - ecx_1
    var_a8 = nullptr

int32_t* result

if (arg3 != 0 || (eax_5 & 0xffffff80) s<= 0)
label_6a15f2:
    int32_t* esi_3 = sub_745f3f(0x28)
    
    if (esi_3 == 0)
        esi_3 = nullptr
    else
        __builtin_memset(esi_3, 0, 0x27)
        esi_3[7] = 0
        esi_3[8] = 0
    
    int32_t* var_a0 = esi_3
    int32_t var_9c_1 = 0
    int32_t var_8_1 = 1
    int32_t* eax_21 = sub_69e5b0(&var_a8, esi_3)
    int32_t* var_9c_2 = *eax_21
    *eax_21 = var_9c_1
    int32_t* edx_4 = var_a8
    
    if (edx_4 != 0)
        bool cond:1_1 = edx_4[1] != 1
        edx_4[1]
        edx_4[1] -= 1
        
        if (not(cond:1_1))
            (*(*edx_4 + 4))(eax_2)
            bool cond:3_1 = edx_4[2] != 1
            edx_4[2]
            edx_4[2] -= 1
            
            if (not(cond:3_1))
                (*(*edx_4 + 8))()
    
    int32_t* var_d0_5 = esi_3
    int32_t* var_d4_2 = esi_3
    void** var_d8_2 = &var_a0
    int32_t var_8_2 = 2
    
    if (___std_fs_change_permissions@12(var_a0, arg2) != 0)
        int32_t var_94
        sub_6a0aa0(&var_94)
        var_8_2.b = 3
        int32_t eax_27 = data_4ebe2a8
        int32_t* var_38
        int32_t* ecx_19 = var_38
        int32_t* edx_6 = var_a0
        int32_t var_90_1 = eax_27
        data_4ebe2a8 = eax_27 + 1
        var_94 = 2
        int32_t* var_3c_1 = edx_6
        
        if (var_9c_2 != ecx_19)
            if (var_9c_2 != 0)
                var_9c_2[2] += 1
                edx_6 = var_a0
                ecx_19 = var_38
            
            if (ecx_19 != 0)
                bool cond:7_1 = ecx_19[2] != 1
                ecx_19[2]
                ecx_19[2] -= 1
                
                if (not(cond:7_1))
                    (*(*ecx_19 + 8))(eax_2)
                
                edx_6 = var_a0
            
            int32_t* var_38_1 = var_9c_2
        
        void var_6c
        
        if (&var_6c != arg2)
            sub_52e3c0(&var_6c, arg2, 0, 0xffffffff)
            edx_6 = var_a0
        
        int32_t var_8c_1 = edx_6[1]
        int32_t var_88_1 = edx_6[2]
        int32_t var_84_1 = edx_6[3]
        int32_t var_80_1 = edx_6[4]
        char var_40_1 = 0
        sub_6a4030(&var_94)
        result = arg1
        int32_t* eax_34 = var_a0
        var_a0 = nullptr
        *result = eax_34
        result[1] = 0
        int32_t* eax_35 = result[1]
        result[1] = var_9c_2
        var_9c_2 = eax_35
        int32_t var_b0_2 = 1
        var_8_2.b = 2
        sub_5719b0(&var_94)
    else
        result = arg1
        int32_t var_b0_1 = 1
        *result = 0
        result[1] = 0
    
    var_8_2.b = 0
    
    if (var_9c_2 != 0)
        bool cond:5_1 = var_9c_2[1] != 1
        var_9c_2[1]
        var_9c_2[1] -= 1
        
        if (not(cond:5_1))
            (*(*var_9c_2 + 4))(eax_2)
            int32_t ebx_1 = var_9c_2[2]
            var_9c_2[2] -= 1
            
            if (ebx_1 == 1)
                (*(*var_9c_2 + 8))()
else
    void* eax_6 = nullptr
    void* var_a4_1 = nullptr
    
    while (true)
        if (*(eax_6 + ecx_1) == 2)
            int32_t* eax_7
            
            if (arg2[5] u< 8)
                eax_7 = arg2
            else
                eax_7 = *arg2
            
            int32_t var_d0_1 = arg2[4]
            
            if (sub_536340(eax_6 + ecx_1 + 0x28, eax_6 + ecx_1 + 0x28, *(eax_6 + ecx_1 + 0x38), 
                    eax_7) == 0)
                void var_b8
                bool edx_2 = *sub_571430(var_a4_1 + data_4ebe29c + 0x58, &var_b8) != 0
                int32_t* var_b4
                
                if (var_b4 != 0)
                    bool cond:6_1 = var_b4[1] != 1
                    var_b4[1]
                    var_b4[1] -= 1
                    
                    if (not(cond:6_1))
                        (*(*var_b4 + 4))(eax_2)
                        bool cond:8_1 = var_b4[2] != 1
                        var_b4[2]
                        var_b4[2] -= 1
                        
                        if (not(cond:8_1))
                            (*(*var_b4 + 8))()
                        
                        edx_2 = edx_2
                
                if (edx_2 != 0)
                    result = arg1
                    sub_571430((var_a8 << 7) + 0x58 + data_4ebe29c, result)
                    break
                
                esi_1 = var_a8
            
            ecx_1 = data_4ebe29c
            eax_6 = var_a4_1
        
        esi_1 += 1
        var_a4_1 = eax_6 + 0x80
        int32_t eax_18 = data_4ebe2a0 - ecx_1
        var_a8 = esi_1
        
        if (esi_1 s>= eax_18 s>> 7)
            goto label_6a15f2
        
        eax_6 = var_a4_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
