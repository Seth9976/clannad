// 函数: sub_5e3a60
// 地址: 0x5e3a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_stats@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* ebx = arg2
char edx = 0
int32_t* var_1c = nullptr
int32_t* result = *(arg1 + 0x9c)
int128_t* var_b0 = ebx
int32_t* var_d8
void* var_b8
int32_t var_20

if (result == 0)
    int32_t* ecx = *(arg1 + 0x790)
    char var_a9_1
    
    if (ecx != 0)
        var_d8 = &var_20
        result = sub_54d980(ecx, var_d8, result)
        edx = 1
        var_a9_1 = 1
    
    if (ecx == 0 || *result == 0)
        var_a9_1 = 0
    
    if ((edx & 1) != 0)
        if (var_1c != 0)
            bool cond:0_1 = var_1c[1] != 1
            var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:0_1))
                (*(*var_1c + 4))(eax_2)
                bool cond:2_1 = var_1c[2] != 1
                var_1c[2]
                var_1c[2] -= 1
                
                if (not(cond:2_1))
                    (*(*var_1c + 8))()
        
        ebx = var_b0
    
    if (var_a9_1 != 0)
        int32_t* ecx_4 = *(arg1 + 0x790)
        int32_t var_d4_2 = 0
        var_d8 = &var_20
        int32_t var_c0_1 = 0
        int32_t var_bc_1 = 0
        void* eax_6 = *sub_54d980(ecx_4, var_d8, var_d4_2)
        int32_t ecx_5 = *(eax_6 + 0x18)
        var_b8 = *(eax_6 + 0x14)
        int32_t var_b4_1 = ecx_5
        *ebx = var_c0_1.o
        
        if (var_1c != 0)
            bool cond:1_1 = var_1c[1] != 1
            var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:1_1))
                (*(*var_1c + 4))(eax_2)
                bool cond:4_1 = var_1c[2] != 1
                var_1c[2]
                var_1c[2] -= 1
                
                if (not(cond:4_1))
                    (*(*var_1c + 8))()
        
        int32_t* ecx_9 = *(arg1 + 0x790)
        int32_t var_d4_3 = 0
        var_d8 = &var_20
        sub_54d980(ecx_9, var_d8, var_d4_3)
        int32_t var_8_1 = 0
        sub_5b17d0(arg1 + 0x878, &var_20)
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c != 0)
            bool cond:3_1 = var_1c[1] != 1
            var_1c[1]
            var_1c[1] -= 1
            
            if (not(cond:3_1))
                (*(*var_1c + 4))(eax_2)
                int32_t esi_1 = var_1c[2]
                var_1c[2] -= 1
                
                if (esi_1 == 1)
                    (*(*var_1c + 8))()
    
    result.b = 1
else if (result != 1 || *(arg1 + 0xb0) == 0)
    result.b = 1
else
    var_b0 = nullptr
    int32_t var_48
    int16_t* eax_15 = sub_60f460(&var_b0, arg1 + 0xa0, &var_48, &var_b0)
    int32_t var_8_3 = 1
    int32_t var_38
    void var_60
    
    if (var_38 != 0)
        if (var_b0 != 1)
            int16_t* eax_18 = sub_548cb0(eax_15, 0xaf2ff8, &var_60, arg1 + 0xa0)
            var_8_3.b = 4
            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_21 = data_bac424
            var_d8 = 2
            sub_684160(ecx_21, var_d8, eax_18)
            sub_52e8a0(&var_60)
            goto label_5e3d8e
        
        int32_t var_d4_11 = *(ebx + 0xc) - *(ebx + 4)
        var_d8 = *(ebx + 8) - *ebx
        void var_e0
        int32_t var_dc
        sub_6a1900(&var_b8, &var_48, var_e0, var_dc)
        var_8_3.b = 5
        void* eax_21 = var_b8
        
        if (eax_21 == 0)
            void var_78
            void** eax_22 = sub_6b9ed0(&var_78)
            var_8_3.b = 6
            void var_90
            int16_t* eax_23 = sub_548cb0(eax_22, 0xaf2fe8, &var_90, arg1 + 0xa0)
            var_8_3.b = 7
            void var_a8
            int16_t* eax_24 = sub_532b80(eax_23, eax_23, &var_a8, &data_af1b6c)
            var_8_3.b = 8
            int32_t* eax_25 = sub_5327a0(eax_24, eax_24, &var_60, eax_22)
            var_8_3.b = 9
            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_29 = data_bac424
            var_d8 = 2
            sub_684160(ecx_29, var_d8, eax_25)
            sub_52e8a0(&var_60)
            sub_52e8a0(&var_a8)
            sub_52e8a0(&var_90)
            sub_52e8a0(&var_78)
            var_8_3.b = 1
            sub_54b010(&var_b8)
            goto label_5e3d8e
        
        int32_t ecx_35 = *(eax_21 + 8)
        var_20 = *(eax_21 + 4)
        int32_t var_1c_2 = ecx_35
        int32_t var_24_1 = 0
        *ebx = 0.o
        sub_54d950(&var_d8, &var_b8)
        sub_6f1260(arg1 + 0x7a0, nullptr, var_d8)
        var_8_3.b = 1
        sub_54b010(&var_b8)
        sub_52e8a0(&var_48)
        result.b = 1
    else
        int16_t* eax_16 = sub_548cb0(eax_15, 0xaf2fe8, &var_60, arg1 + 0xa0)
        var_8_3.b = 2
        void var_30
        int16_t* eax_17 = sub_532b80(eax_16, eax_16, &var_30, &data_af1b40)
        var_8_3.b = 3
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_17 = data_bac424
        var_d8 = 0xa
        sub_684160(ecx_17, var_d8, eax_17)
        sub_52e8a0(&var_30)
        sub_52e8a0(&var_60)
    label_5e3d8e:
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48)
        
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
