// 函数: sub_5b2ab0
// 地址: 0x5b2ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba598
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x310) = 0
int32_t* esi = *(arg1 + 0x314)
*(arg1 + 0x314) = 0

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()

*(arg1 + 0x318) = 0
int32_t* esi_1 = *(arg1 + 0x31c)
*(arg1 + 0x31c) = 0

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_1 + 4))(eax_2)
        bool cond:3_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:3_1))
            (*(*esi_1 + 8))()

sub_6efe60(arg1 + 0x320)
*(arg1 + 0x440) = 0
*(arg1 + 0x444) = 0
*(arg1 + 0x448) = 0
*(arg1 + 0x44c) = 0
sub_6efdb0(arg1 + 0x320)
sub_6efe60(arg1 + 0x450)
*(arg1 + 0x570) = 0
*(arg1 + 0x574) = 0
*(arg1 + 0x578) = 0
*(arg1 + 0x57c) = 0
sub_6efdb0(arg1 + 0x450)
void* edx_3 = arg1
int32_t* result = *(edx_3 + 0x25c)

if (result s>= 0)
    void** eax_15 = data_bac510 + 0xa3e7c8 + result * 0x94
    void* ecx_11 = edx_3 + 0x260
    char* var_84
    
    if (ecx_11 != eax_15)
        void* const var_80_1 = 0xffffffff
        var_84 = nullptr
        sub_52e3c0(ecx_11, eax_15, var_84, var_80_1)
        edx_3 = arg1
    
    *(arg1 + 0x320) = 2
    void var_68
    int32_t var_44
    
    if (*(edx_3 + 0x270) == 0)
        var_84 = data_4ebe2ac
        int32_t* eax_41 = data_4ebe2b0
        
        if (eax_41 != 0)
            eax_41[1]
            eax_41[1] += 1
        
        operator new(edx_3 + 0x320, var_84, eax_41)
        var_84 = data_4ebe2ec
        void* eax_44 = data_4ebe2f0
        void* var_80_14 = eax_44
        
        if (eax_44 != 0)
            *(eax_44 + 4)
            *(eax_44 + 4) += 1
        
        operator new[](arg1 + 0x320)
    else
        var_84 = data_4ebe2bc
        int32_t* eax_17 = data_4ebe2c0
        
        if (eax_17 != 0)
            eax_17[1]
            eax_17[1] += 1
        
        operator new(edx_3 + 0x320, var_84, eax_17)
        var_84 = data_4ebe2ec
        void* eax_20 = data_4ebe2f0
        void* var_80_3 = eax_20
        
        if (eax_20 != 0)
            *(eax_20 + 4)
            *(eax_20 + 4) += 1
        
        operator new[](arg1 + 0x320)
        int32_t var_18_1 = 7
        void* const var_80_4 = 0xffffffff
        var_84 = nullptr
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        int32_t* eax_22 = sub_52e3c0(&var_2c, ecx_11, var_84, var_80_4)
        char var_80_5 = 0
        var_84 = nullptr
        int32_t var_8_1 = 0
        var_8_1.b = 1
        void var_58
        sub_54d190(arg1 + 0x310, sub_6281e0(eax_22, &var_2c, &var_58, var_84.b, var_80_5))
        var_8_1.b = 0
        int32_t* var_54
        
        if (var_54 != 0)
            bool cond:6_1 = var_54[1] != 1
            var_54[1]
            var_54[1] -= 1
            
            if (not(cond:6_1))
                (*(*var_54 + 4))(eax_2)
                bool cond:7_1 = var_54[2] != 1
                var_54[2]
                var_54[2] -= 1
                
                if (not(cond:7_1))
                    (*(*var_54 + 8))()
        
        int32_t* ecx_23 = *(arg1 + 0x310)
        
        if (ecx_23 != 0)
            sub_54d980(ecx_23, &var_84, 0)
            sub_6f1260(arg1 + 0x320, nullptr)
        else
            int16_t* eax_29 = sub_532b80(arg1 + 0x310, &var_2c, &var_44, &data_af1a9c)
            var_8_1.b = 2
            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_25 = data_bac424
            var_84 = 0xa
            sub_684160(ecx_25, var_84, eax_29)
            var_8_1.b = 0
            int32_t var_30
            
            if (var_30 u>= 8)
                j__free(var_44)
        
        int32_t var_80_10 = 0
        var_84 = &var_58
        bool var_4d_1 = *sub_54d980(*(arg1 + 0x310), var_84, var_80_10) != 0
        
        if (var_54 != 0)
            bool cond:8_1 = var_54[1] != 1
            var_54[1]
            var_54[1] -= 1
            
            if (not(cond:8_1))
                (*(*var_54 + 4))(eax_2)
                bool cond:9_1 = var_54[2] != 1
                var_54[2]
                var_54[2] -= 1
                
                if (not(cond:9_1))
                    (*(*var_54 + 8))()
        
        if (var_4d_1 != 0)
            int32_t var_80_11 = 0
            var_84 = &var_68
            void* eax_38 = *sub_54d980(*(arg1 + 0x310), var_84, var_80_11)
            int32_t eax_39 = *(eax_38 + 4)
            *(arg1 + 0x2bc) = *(eax_38 + 8)
            *(arg1 + 0x2b8) = eax_39
            sub_54b010(&var_68)
        
        int32_t var_8_2 = 0xffffffff
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
    
    void* edx_11 = arg1
    void** ecx_41 = *(edx_11 + 0x25c) * 0x94 + data_bac510 + 0xa3e7e0
    void* eax_48 = edx_11 + 0x278
    
    if (eax_48 != ecx_41)
        void* const var_80_15 = 0xffffffff
        var_84 = nullptr
        sub_52e3c0(eax_48, ecx_41, var_84, var_80_15)
        edx_11 = arg1
    
    *(arg1 + 0x450) = 2
    
    if (*(edx_11 + 0x288) == 0)
        var_84 = data_4ebe2ac
        int32_t* eax_62 = data_4ebe2b0
        
        if (eax_62 != 0)
            eax_62[1]
            eax_62[1] += 1
        
        operator new(arg1 + 0x450, var_84, eax_62)
        var_84 = data_4ebe2ec
        void* eax_65 = data_4ebe2f0
        void* var_80_23 = eax_65
        
        if (eax_65 != 0)
            *(eax_65 + 4)
            *(eax_65 + 4) += 1
        
        result = operator new[](arg1 + 0x450)
    else
        var_84 = data_4ebe2bc
        int32_t* eax_50 = data_4ebe2c0
        
        if (eax_50 != 0)
            eax_50[1]
            eax_50[1] += 1
        
        operator new(arg1 + 0x450, var_84, eax_50)
        var_84 = data_4ebe2ec
        void* eax_53 = data_4ebe2f0
        void* var_80_17 = eax_53
        
        if (eax_53 != 0)
            *(eax_53 + 4)
            *(eax_53 + 4) += 1
        
        operator new[](arg1 + 0x450)
        int32_t var_30_1 = 7
        void* const var_80_18 = 0xffffffff
        var_84 = nullptr
        int32_t var_34_1 = 0
        var_44.w = 0
        int32_t* eax_55 = sub_52e3c0(&var_44, eax_48, var_84, var_80_18)
        char var_80_19 = 0
        var_84 = nullptr
        int32_t var_8_3 = 3
        var_8_3.b = 4
        sub_54d190(arg1 + 0x318, sub_6281e0(eax_55, &var_44, &var_68, var_84.b, var_80_19))
        var_8_3.b = 3
        int32_t* var_64
        
        if (var_64 != 0)
            bool cond:10_1 = var_64[1] != 1
            var_64[1]
            var_64[1] -= 1
            
            if (not(cond:10_1))
                (*(*var_64 + 4))(eax_2)
                int32_t edi_1 = var_64[2]
                var_64[2] -= 1
                
                if (edi_1 == 1)
                    (*(*var_64 + 8))()
        
        result = arg1 + 0x318
        int32_t* ecx_52 = *result
        
        if (ecx_52 != 0)
            sub_54d980(ecx_52, &var_84, 0)
            result = sub_6f1260(arg1 + 0x450, nullptr)
        
        if (var_30_1 u>= 8)
            result = j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
