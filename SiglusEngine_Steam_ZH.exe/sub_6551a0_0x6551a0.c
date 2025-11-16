// 函数: sub_6551a0
// 地址: 0x6551a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4652
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** ecx = __chkstk(0x132c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t entry_ebx
int32_t var_14_1 = entry_ebx
void* esi
void* var_18 = esi
int32_t edi
int32_t var_1c = edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx s>= 0)
    result = data_bac510

if (ecx s< 0 || result[0x42e4] + result[0x42e3] + result[0x42e2] s<= ecx)
    result.b = 0
else
    void* esi_1 = data_bac504
    int32_t var_3a_1 = 0
    int32_t var_36 = 0
    *(esi_1 + 0x10) = var_3a_1.q
    *(esi_1 + 0x18) = 0
    int32_t var_32 = 0
    void* eax_3 = esi_1 + 0x20
    *(esi_1 + 0x1c) = 0
    bool cond:0_1 = *(eax_3 + 0x14) u< 8
    *(eax_3 + 0x10) = 0
    
    if (not(cond:0_1))
        eax_3 = *eax_3
    
    *eax_3 = 0
    void* eax_4 = esi_1 + 0x38
    bool cond:1_1 = *(eax_4 + 0x14) u< 8
    *(eax_4 + 0x10) = 0
    
    if (not(cond:1_1))
        eax_4 = *eax_4
    
    *eax_4 = 0
    void* eax_5 = esi_1 + 0x50
    bool cond:2_1 = *(eax_5 + 0x14) u< 8
    *(eax_5 + 0x10) = 0
    
    if (not(cond:2_1))
        eax_5 = *eax_5
    
    *eax_5 = 0
    void* eax_6 = esi_1 + 0x68
    bool cond:3_1 = *(eax_6 + 0x14) u< 8
    *(eax_6 + 0x10) = 0
    
    if (not(cond:3_1))
        eax_6 = *eax_6
    
    *eax_6 = 0
    void* eax_7 = esi_1 + 0x80
    bool cond:4_1 = *(eax_7 + 0x14) u< 8
    *(eax_7 + 0x10) = 0
    
    if (not(cond:4_1))
        eax_7 = *eax_7
    
    *eax_7 = 0
    *(esi_1 + 0x9c) = *(esi_1 + 0x98)
    *(esi_1 + 0xa4) = 0
    *(esi_1 + 0xac) = *(esi_1 + 0xa8)
    *(esi_1 + 0xb4) = 0
    *(esi_1 + 0xc0) = *(esi_1 + 0xbc)
    void** var_24 = *(*(esi_1 + 0xc8) + 4)
    sub_5d4e30(esi_1 + 0xc8, var_24)
    void* eax_12 = *(esi_1 + 0xc8)
    var_24 = ecx
    *(eax_12 + 4) = eax_12
    int32_t* eax_13 = *(esi_1 + 0xc8)
    *eax_13 = eax_13
    void* eax_14 = *(esi_1 + 0xc8)
    *(eax_14 + 8) = eax_14
    void** var_ec
    int32_t* var_28_1 = &var_ec
    *(esi_1 + 0xcc) = 0
    sub_651e40(var_28_1, var_24)
    int32_t var_8_1 = 0
    int32_t* var_133c = nullptr
    int64_t var_1334_1 = 0
    var_8_1.b = 1
    var_24 = 2
    int32_t var_18_1 = 7
    int32_t* var_28_2 = &data_af335c
    var_1c = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, var_28_2, var_24)
    var_8_1.b = 2
    var_24 = &var_2c
    struct _EXCEPTION_REGISTRATION_RECORD** eax_15 = sub_6b7a80(&var_133c, &var_ec, var_24)
    var_8_1.b = 1
    entry_ebx.b = eax_15.b == 0
    
    if (var_18_1 u>= 8)
        var_24 = var_2c.d
        eax_15 = j__free(var_24)
    
    void** var_44
    
    if (entry_ebx.b == 0)
        var_24 = var_133c
        char var_131c[0x28]
        sub_6b74a0(eax_15, 0x122c, &var_131c, var_24)
        int32_t var_60_1 = 7
        int32_t var_64_1 = 0
        int16_t var_74 = 0
        int16_t var_12f4
        void** ecx_8
        
        if (var_12f4 != 0)
            int16_t* ecx_9 = &var_12f4
            int16_t i
            
            do
                i = *ecx_9
                ecx_9 = &ecx_9[1]
            while (i != 0)
            void var_12f2
            ecx_8 = (ecx_9 - &var_12f2) s>> 1
        else
            ecx_8 = nullptr
        
        var_24 = ecx_8
        sub_52e720(&var_74, &var_12f4, var_24)
        var_8_1.b = 5
        int32_t* ecx_13 = data_bac504 + 0x20
        
        if (ecx_13 != &var_74)
            var_24 = 0xffffffff
            var_2c.d = &var_74
            sub_52e3c0(ecx_13, var_2c, 0, var_24)
        
        var_8_1.b = 1
        
        if (var_60_1 u>= 8)
            var_24 = var_74.d
            j__free(var_24)
        
        int32_t var_a8_1 = 7
        int32_t var_ac_1 = 0
        int16_t var_bc = 0
        int16_t var_10f4
        void** ecx_14
        
        if (var_10f4 != 0)
            int16_t* ecx_15 = &var_10f4
            int16_t i_1
            
            do
                i_1 = *ecx_15
                ecx_15 = &ecx_15[1]
            while (i_1 != 0)
            void var_10f2
            ecx_14 = (ecx_15 - &var_10f2) s>> 1
        else
            ecx_14 = nullptr
        
        var_24 = ecx_14
        sub_52e720(&var_bc, &var_10f4, var_24)
        var_8_1.b = 6
        int32_t* ecx_19 = data_bac504 + 0x38
        
        if (ecx_19 != &var_bc)
            var_24 = 0xffffffff
            var_2c.d = &var_bc
            sub_52e3c0(ecx_19, var_2c, 0, var_24)
        
        var_8_1.b = 1
        
        if (var_a8_1 u>= 8)
            var_24 = var_bc.d
            j__free(var_24)
        
        int32_t var_78_1 = 7
        int32_t var_7c_1 = 0
        int16_t var_8c = 0
        int16_t var_ef4
        void** ecx_20
        
        if (var_ef4 != 0)
            int16_t* ecx_21 = &var_ef4
            int16_t i_2
            
            do
                i_2 = *ecx_21
                ecx_21 = &ecx_21[1]
            while (i_2 != 0)
            void var_ef2
            ecx_20 = (ecx_21 - &var_ef2) s>> 1
        else
            ecx_20 = nullptr
        
        var_24 = ecx_20
        sub_52e720(&var_8c, &var_ef4, var_24)
        var_8_1.b = 7
        int32_t* ecx_25 = data_bac504 + 0x50
        
        if (ecx_25 != &var_8c)
            var_24 = 0xffffffff
            var_2c.d = &var_8c
            sub_52e3c0(ecx_25, var_2c, 0, var_24)
        
        var_8_1.b = 1
        
        if (var_78_1 u>= 8)
            var_24 = var_8c.d
            j__free(var_24)
        
        int32_t var_90_1 = 7
        int32_t var_94_1 = 0
        int16_t var_a4 = 0
        int16_t var_cf4
        void** ecx_26
        
        if (var_cf4 != 0)
            int16_t* ecx_27 = &var_cf4
            int16_t i_3
            
            do
                i_3 = *ecx_27
                ecx_27 = &ecx_27[1]
            while (i_3 != 0)
            void var_cf2
            ecx_26 = (ecx_27 - &var_cf2) s>> 1
        else
            ecx_26 = nullptr
        
        var_24 = ecx_26
        sub_52e720(&var_a4, &var_cf4, var_24)
        var_8_1.b = 8
        int32_t* ecx_31 = data_bac504 + 0x68
        
        if (ecx_31 != &var_a4)
            var_24 = 0xffffffff
            var_2c.d = &var_a4
            sub_52e3c0(ecx_31, var_2c, 0, var_24)
        
        var_8_1.b = 1
        
        if (var_90_1 u>= 8)
            var_24 = var_a4.d
            j__free(var_24)
        
        int32_t var_c0_1 = 7
        int32_t var_c4_1 = 0
        int16_t var_d4 = 0
        int16_t var_af4
        void** ecx_32
        
        if (var_af4 != 0)
            int16_t* ecx_33 = &var_af4
            int16_t i_4
            
            do
                i_4 = *ecx_33
                ecx_33 = &ecx_33[1]
            while (i_4 != 0)
            void var_af2
            ecx_32 = (ecx_33 - &var_af2) s>> 1
        else
            ecx_32 = nullptr
        
        var_24 = ecx_32
        sub_52e720(&var_d4, &var_af4, var_24)
        var_8_1.b = 9
        int32_t* ecx_37 = data_bac504 + 0x80
        
        if (ecx_37 != &var_d4)
            var_24 = 0xffffffff
            var_2c.d = &var_d4
            sub_52e3c0(ecx_37, var_2c, 0, var_24)
        
        if (var_c0_1 u>= 8)
            var_24 = var_d4.d
            j__free(var_24)
        
        var_24.o = zx.o(0)
        var_8_1.b = 0xa
        void** var_f4
        var_24 = var_f4
        sub_5979b0(&var_24, var_24)
        char* ecx_39 = var_24
        var_24 = var_133c
        
        if (ecx_39 == eax_2)
            ecx_39 = nullptr
        
        sub_6b74a0(0, var_f4, ecx_39, var_24)
        sub_6524b0(&var_24)
        void** edx_5 = var_24
        void* ecx_41 = data_bac504
        
        if (edx_5 == eax_2)
            edx_5 = nullptr
        
        void* var_18_2 = 0xe
        *(ecx_41 + 0x10) = *edx_5
        *(ecx_41 + 0x18) = edx_5[2]
        int32_t eax_18
        eax_18.w = edx_5[3].w
        *(ecx_41 + 0x1c) = eax_18.w
        var_24 = &var_44
        int16_t* eax_19 = sub_5b0600(&var_24, var_24)
        var_8_1.b = 0xb
        int32_t* ecx_44 = data_bac504 + 0x20
        
        if (ecx_44 != eax_19)
            var_24 = 0xffffffff
            var_2c.d = eax_19
            sub_52e3c0(ecx_44, var_2c, 0, var_24)
        
        var_8_1.b = 0xa
        
        if (var_32 u>= 8)
            var_24 = var_44
            j__free(var_24)
        
        var_24 = &var_44
        int16_t* eax_20 = sub_5b0600(&var_24, var_24)
        var_8_1.b = 0xc
        int32_t* ecx_47 = data_bac504 + 0x38
        
        if (ecx_47 != eax_20)
            var_24 = 0xffffffff
            var_2c.d = eax_20
            sub_52e3c0(ecx_47, var_2c, 0, var_24)
        
        var_8_1.b = 0xa
        
        if (var_32 u>= 8)
            var_24 = var_44
            j__free(var_24)
        
        var_24 = &var_44
        int16_t* eax_21 = sub_5b0600(&var_24, var_24)
        var_8_1.b = 0xd
        int32_t* ecx_50 = data_bac504 + 0x50
        
        if (ecx_50 != eax_21)
            var_24 = 0xffffffff
            var_2c.d = eax_21
            sub_52e3c0(ecx_50, var_2c, 0, var_24)
        
        var_8_1.b = 0xa
        
        if (var_32 u>= 8)
            var_24 = var_44
            j__free(var_24)
        
        void** var_5c
        var_24 = &var_5c
        int16_t* eax_22 = sub_5b0600(&var_24, var_24)
        var_8_1.b = 0xe
        int32_t* ecx_53 = data_bac504 + 0x68
        
        if (ecx_53 != eax_22)
            var_24 = 0xffffffff
            var_2c.d = eax_22
            sub_52e3c0(ecx_53, var_2c, 0, var_24)
        
        var_8_1.b = 0xa
        sub_52e8a0(&var_5c)
        var_24 = &var_5c
        int16_t* eax_23 = sub_5b0600(&var_24, var_24)
        var_8_1.b = 0xf
        int32_t* ecx_57 = data_bac504 + 0x80
        
        if (ecx_57 != eax_23)
            var_24 = 0xffffffff
            var_2c.d = eax_23
            sub_52e3c0(ecx_57, var_2c, 0, var_24)
        
        var_8_1.b = 0xa
        sub_52e8a0(&var_5c)
        void** eax_24 = var_24
        
        if (eax_24 == eax_2)
            eax_24 = nullptr
        
        void** esi_3 = *(eax_24 + var_18_2 + 4 - 4)
        void* ecx_61 = data_bac504
        var_24 = esi_3
        sub_5979b0(ecx_61 + 0x98, var_24)
        void* edi_3 = data_bac504
        var_24 = esi_3
        int32_t* eax_25 = *(edi_3 + 0x98)
        
        if (eax_25 == *(edi_3 + 0x9c))
            eax_25 = nullptr
        
        sub_5c1ea0(&var_24, eax_25)
        void** eax_26 = var_24
        
        if (eax_26 == eax_2)
            eax_26 = nullptr
        
        void** esi_4 = *(eax_26 + var_18_2 + 8 - 4)
        var_24 = esi_4
        sub_5979b0(edi_3 + 0xa8, var_24)
        void* eax_27 = data_bac504
        var_24 = esi_4
        int32_t* ecx_67 = *(eax_27 + 0xa8)
        
        if (ecx_67 == *(eax_27 + 0xac))
            ecx_67 = nullptr
        
        sub_5c1ea0(&var_24, ecx_67)
        void** edi_4 = var_24
        void* esi_6 = var_18_2 + 0xc
        entry_ebx = eax_2
        void** eax_28 = edi_4
        var_18 = esi_6
        
        if (edi_4 == entry_ebx)
            eax_28 = nullptr
        
        int32_t i_7 = *(eax_28 + esi_6 - 4)
        int32_t i_6 = i_7
        
        if (i_7 s> 0)
            int32_t i_5
            
            do
                var_24 = 0xa8
                int32_t* eax_29
                int32_t* ecx_69
                eax_29, ecx_69 = sub_745f3f(var_24)
                int32_t* eax_30
                
                if (eax_29 == 0)
                    eax_30 = nullptr
                else
                    ecx_69 = eax_29
                    eax_30 = sub_633790(ecx_69)
                
                var_36 = eax_30
                var_32 = 0
                var_8_1.b = 0x10
                var_24 = &var_32:2
                sub_650460(eax_30, eax_30, ecx_69)
                var_8_1.b = 0x11
                
                if (edi_4 == entry_ebx)
                    edi_4 = nullptr
                
                int32_t ecx_70 = *(edi_4 + esi_6 + 0xe - 6)
                int16_t edx_7 = *(edi_4 + esi_6 + 0xe - 2)
                *var_36 = *(edi_4 + esi_6 + 0xe - 0xe)
                *(var_36 + 8) = ecx_70
                *(var_36 + 0xc) = edx_7
                var_24 = &var_5c
                int16_t* eax_34 = sub_5b0600(&var_24, var_24)
                var_8_1.b = 0x12
                int32_t* ecx_73 = var_36 + 0x10
                
                if (ecx_73 != eax_34)
                    var_24 = 0xffffffff
                    var_2c.d = eax_34
                    sub_52e3c0(ecx_73, var_2c, 0, var_24)
                
                var_8_1.b = 0x11
                int32_t var_48
                
                if (var_48 u>= 8)
                    var_24 = var_5c
                    j__free(var_24)
                
                var_24 = &var_5c
                int16_t* eax_35 = sub_5b0600(&var_24, var_24)
                var_8_1.b = 0x13
                int32_t* ecx_76 = var_36 + 0x28
                
                if (ecx_76 != eax_35)
                    var_24 = 0xffffffff
                    var_2c.d = eax_35
                    sub_52e3c0(ecx_76, var_2c, 0, var_24)
                
                var_8_1.b = 0x11
                
                if (var_48 u>= 8)
                    var_24 = var_5c
                    j__free(var_24)
                
                var_24 = &var_5c
                int16_t* eax_36 = sub_5b0600(&var_24, var_24)
                var_8_1.b = 0x14
                int32_t* ecx_79 = var_36 + 0x40
                
                if (ecx_79 != eax_36)
                    var_24 = 0xffffffff
                    var_2c.d = eax_36
                    sub_52e3c0(ecx_79, var_2c, 0, var_24)
                
                var_8_1.b = 0x11
                
                if (var_48 u>= 8)
                    var_24 = var_5c
                    j__free(var_24)
                
                var_24 = &var_5c
                int16_t* eax_37 = sub_5b0600(&var_24, var_24)
                var_8_1.b = 0x15
                int32_t* ecx_82 = var_36 + 0x58
                
                if (ecx_82 != eax_37)
                    var_24 = 0xffffffff
                    var_2c.d = eax_37
                    sub_52e3c0(ecx_82, var_2c, 0, var_24)
                
                var_8_1.b = 0x11
                
                if (var_48 u>= 8)
                    var_24 = var_5c
                    j__free(var_24)
                
                var_24 = &var_5c
                int16_t* eax_38 = sub_5b0600(&var_24, var_24)
                var_8_1.b = 0x16
                int32_t* ecx_85 = var_36 + 0x70
                
                if (ecx_85 != eax_38)
                    var_24 = 0xffffffff
                    var_2c.d = eax_38
                    sub_52e3c0(ecx_85, var_2c, 0, var_24)
                
                var_8_1.b = 0x11
                
                if (var_48 u>= 8)
                    var_24 = var_5c
                    j__free(var_24)
                
                edi_4 = var_24
                void* esi_9 = esi_6 + 0x12
                entry_ebx = eax_2
                void** eax_39 = edi_4
                void* var_18_6 = esi_9
                
                if (edi_4 == entry_ebx)
                    eax_39 = nullptr
                
                void** eax_40 = *(eax_39 + esi_9 - 4)
                int32_t* ecx_87 = var_36 + 0x88
                var_24 = eax_40
                sub_5979b0(ecx_87, var_24)
                void* edx_8 = var_36
                int32_t eax_41 = *(edx_8 + 0x88)
                
                if (eax_41 == *(edx_8 + 0x8c))
                    eax_41 = 0
                
                if (eax_40 s> 0)
                    void** eax_42 = edi_4
                    var_24 = eax_40
                    
                    if (edi_4 == entry_ebx)
                        eax_42 = nullptr
                    
                    var_2c.d = eax_41
                    sub_748840(var_2c, eax_42 + esi_9)
                    edx_8 = var_36
                    esi_9 += eax_40
                
                esi_6 = esi_9 + 4
                void** eax_44 = edi_4
                
                if (edi_4 == entry_ebx)
                    eax_44 = nullptr
                
                void** eax_45 = *(eax_44 + esi_6 - 4)
                var_24 = eax_45
                sub_5979b0(edx_8 + 0x98, var_24)
                int16_t* eax_46 = var_36
                int32_t edx_9 = *(eax_46 + 0x98)
                
                if (edx_9 == *(eax_46 + 0x9c))
                    edx_9 = 0
                
                if (eax_45 s> 0)
                    void** eax_47 = edi_4
                    
                    if (edi_4 == entry_ebx)
                        eax_47 = nullptr
                    
                    var_24 = eax_45
                    var_2c.d = edx_9
                    sub_748840(var_2c, eax_47 + esi_6, var_24, eax_2, var_1c, esi_6, var_14_1)
                    eax_46 = var_36
                    esi_6 += eax_45
                    var_18 = esi_6
                
                var_24 = &var_36:2
                sub_5b17d0(sub_651340(data_bac504 + 0xc8, eax_46), var_24)
                var_8_1.b = 0xa
                sub_54b010(&var_36:2)
                i_5 = i_6
                i_6 -= 1
            while (i_5 != 1)
        
        if (sub_6b73d0(var_133c) != 0)
            var_133c = nullptr
            int64_t var_1334_2 = 0
        
        var_24 = &data_af7dac
        sub_52e820(&var_44, var_24)
        var_8_1.b = 0x17
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_97 = data_bac424
        var_24 = &var_44
        sub_684160(ecx_97, 5, var_24)
        
        if (var_32 u>= 8)
            var_24 = var_44
            j__free(var_24)
        
        entry_ebx.b = 1
        
        if (edi_4 != 0)
            var_24 = edi_4
            j__free(var_24)
    else
        int16_t* eax_16 = sub_6b9ed0(&var_44)
        var_24 = eax_16
        var_8_1.b = 3
        var_24 = sub_548cb0(eax_16, 0xaf7d84, &var_2c, var_24)
        var_8_1.b = 4
        sub_684160(data_bac424, 2, var_24)
        
        if (var_18_1 u>= 8)
            var_24 = var_2c.d
            j__free(var_24)
        
        var_18 = 7
        bool cond:6_1 = var_32 u< 8
        var_1c = 0
        var_2c = 0
        
        if (not(cond:6_1))
            var_24 = var_44
            j__free(var_24)
        
        entry_ebx.b = 0
    var_8_1.b = 0
    
    if (sub_6b73d0(var_133c).b != 0)
        var_133c = nullptr
        int64_t var_1334_3 = 0
    
    int32_t var_d8
    
    if (var_d8 u>= 8)
        var_24 = var_ec
        j__free(var_24)
    
    result.b = entry_ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(var_14_1 ^ &__saved_ebp)
return result
