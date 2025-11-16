// 函数: sub_5d2ef0
// 地址: 0x5d2ef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbfd2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = 0
int32_t var_38c = 0
int32_t var_398 = 0
*(arg1 + 0x13c) = 0
void var_3b4
char var_385_1

if (*(arg1 + 0x118) s<= 0)
    var_385_1 = 0
else
    int32_t* ecx = *(arg1 + 0x408)
    
    if (ecx == 0)
        var_385_1 = 0
    else
        result = sub_54d980(ecx, &var_3b4, 0)
        edx = 1
        var_38c = 1
        var_385_1 = 1
        
        if (*result == 0)
            var_385_1 = 0

int32_t* var_3b0

if ((edx.b & 1) != 0)
    var_38c = edx & 0xfffffffe
    
    if (var_3b0 != 0)
        result = &var_3b0[1]
        bool cond:0_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:0_1))
            (*(*var_3b0 + 4))(eax_2)
            result = &var_3b0[2]
            bool cond:2_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:2_1))
                result = (*(*var_3b0 + 8))()

void var_3a4
int32_t* var_3a0
int32_t var_14c
int32_t var_144
void var_6c

if (var_385_1 != 0)
    sub_6efae0(&var_144)
    int128_t var_24_1 = zx.o(0)
    int32_t var_8_1 = 0
    var_14c = neg.d(*(*sub_54d980(*(arg1 + 0x408), &var_3a4, 0) + 0x18))
    
    if (var_3a0 != 0)
        bool cond:1_1 = var_3a0[1] != 1
        var_3a0[1]
        var_3a0[1] -= 1
        
        if (not(cond:1_1))
            (*(*var_3a0 + 4))(eax_2)
            bool cond:4_1 = var_3a0[2] != 1
            var_3a0[2]
            var_3a0[2] -= 1
            
            if (not(cond:4_1))
                (*(*var_3a0 + 8))()
    
    int32_t var_148_1 = *(*sub_54d980(*(arg1 + 0x408), &var_3a4, 0) + 0x18)
    
    if (var_3a0 != 0)
        bool cond:3_1 = var_3a0[1] != 1
        var_3a0[1]
        var_3a0[1] -= 1
        
        if (not(cond:3_1))
            (*(*var_3a0 + 4))(eax_2)
            bool cond:6_1 = var_3a0[2] != 1
            var_3a0[2]
            var_3a0[2] -= 1
            
            if (not(cond:6_1))
                (*(*var_3a0 + 8))()
    
    int32_t eax_20 = data_4ebe2bc
    var_144 = 2
    int32_t* eax_21 = data_4ebe2c0
    
    if (eax_21 != 0)
        eax_21[1]
        eax_21[1] += 1
    
    operator new(&var_144, eax_20, eax_21)
    int32_t eax_23 = data_4ebe2ec
    int32_t* eax_24 = data_4ebe2f0
    
    if (eax_24 != 0)
        eax_24[1]
        eax_24[1] += 1
    
    operator new[](&var_144, eax_23, eax_24)
    void var_394
    sub_54d980(*(arg1 + 0x408), &var_394, 0)
    var_8_1.b = 1
    sub_5b17d0(&var_6c, &var_394)
    var_8_1.b = 0
    int32_t* var_390
    
    if (var_390 != 0)
        bool cond:7_1 = var_390[1] != 1
        var_390[1]
        var_390[1] -= 1
        
        if (not(cond:7_1))
            (*(*var_390 + 4))(eax_2)
            bool cond:8_1 = var_390[2] != 1
            var_390[2]
            var_390[2] -= 1
            
            if (not(cond:8_1))
                (*(*var_390 + 8))()
    
    sub_5d4590(arg1 + 0x12c, &var_14c)
    int32_t var_8_2 = 0xffffffff
    result = sub_6efc80(&var_144)

int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x118) s> 0)
    do
        void* edi = mods.dp.d(sx.q(*(arg1 + 0x11c) + i), *(arg1 + 0x108)) * 0x2e60
        void* ecx_26 = *(arg1 + 0x10c) + 0x4c + edi
        *(ecx_26 + 0xe0) = *(ecx_26 + 8)
        *(ecx_26 + 0xe4) = *(ecx_26 + 0xc)
        sub_5dbf60(ecx_26)
        char* esi_6 = *(arg1 + 0x10c) + edi
        int16_t var_47c
        
        if (*esi_6 == 0)
            if (*(esi_6 + 0x44) != 0)
                if (esi_6[0x1f0] == 0 && *(esi_6 + 0x1c8) == 1)
                    *(esi_6 + 0x130) += *(esi_6 + 0x9c)
                
                sub_5ddaa0(&esi_6[0x4c], &esi_6[0x34], nullptr)
                
                if (esi_6[0x1f0] == 0)
                    *(esi_6 + 0x1c8) = 0
                    esi_6[0x1f0] = 1
                
                void* esi_9 = *(arg1 + 0x10c) + edi
                *(esi_9 + 0x1bc) = 0
                *(esi_9 + 0x1c0) = 0
                *(esi_9 + 0x1c4) = 0
                sub_5de520(esi_9 + 0x4c)
                *(esi_9 + 0x1f1) = 1
            
            void* eax_44 = *(arg1 + 0x10c)
            
            if (*(edi + eax_44 + 0x14) != 0)
                void* esi_10 = edi + eax_44
                
                if (*(esi_10 + 0x1f0) == 0 && *(esi_10 + 0x1c8) == 1)
                    *(esi_10 + 0x130) += *(esi_10 + 0x9c)
                
                sub_5ddaa0(esi_10 + 0x4c, eax_44 + 4 + edi, nullptr)
                
                if (*(esi_10 + 0x1f0) == 0)
                    *(esi_10 + 0x1c8) = 0
                    *(esi_10 + 0x1f0) = 1
                
                void* esi_12 = *(arg1 + 0x10c) + edi
                *(esi_12 + 0x1bc) = 0
                *(esi_12 + 0x1c0) = 0
                *(esi_12 + 0x1c4) = 0
                sub_5de520(esi_12 + 0x4c)
                *(esi_12 + 0x1f1) = 1
            
            sub_5de490(*(arg1 + 0x10c) + 0x4c + edi)
            *(edi + *(arg1 + 0x10c) + 0x214) = *(arg1 + 0x13c) + var_398
            void* ecx_48 = *(arg1 + 0x10c) + edi
            int32_t eax_50
            
            if (*(data_bac510 + 0x10bd8) != 1)
                eax_50 = *(ecx_48 + 0x130) - *(ecx_48 + 0x6c)
            else
                eax_50 = neg.d(*(ecx_48 + 0x12c) + *(ecx_48 + 0x68))
            
            *(ecx_48 + 0x218) = eax_50
            void** eax_53 = data_bac510 + 0xa47d1c
            int32_t var_468_13 = 7
            int32_t var_46c_10 = 0
            var_47c = 0
            sub_52e3c0(&var_47c, eax_53, 0, 0xffffffff)
            sub_5ea6c0(*(arg1 + 0x10c) + 0x21c + edi, var_47c)
            void* esi_13 = data_bac510
            int32_t var_454_1 = 0xffffffff
            int32_t var_450_1 = 0
            *(edi + *(arg1 + 0x10c) + 0x578) = 1
            int32_t var_3d8_1 = 2
            *(edi + *(arg1 + 0x10c) + 0x5ac) = *(esi_13 + 0xa2ebb0)
            int32_t edx_8 = *(esi_13 + 0xa47d40)
            void* eax_58 = *(arg1 + 0x10c) + 0x21c + edi
            *(eax_58 + 0x2ac) = *(esi_13 + 0xa47d3c)
            *(eax_58 + 0x2b0) = edx_8
            void var_24c
            __builtin_memcpy(&var_24c, eax_58 + 0xac, 0x80)
            *(eax_58 + 0x2b4) = 0
            int32_t var_1d0
            *(&var_24c + (var_1d0 << 2)) = var_454_1.q
            var_1d0 += 2
            void* eax_60 = data_bac510
            __builtin_memcpy(eax_58 + 0x2b8, &var_24c, 0x80)
            int32_t var_468_14 = 7
            int32_t var_46c_11 = 0
            var_47c = 0
            sub_52e3c0(&var_47c, eax_60 + 0xa47d44, 0, 0xffffffff)
            sub_5ea6c0(*(arg1 + 0x10c) + 0x1818 + edi, var_47c)
            void* esi_15 = data_bac510
            int32_t var_3d8_2 = 2
            *(edi + *(arg1 + 0x10c) + 0x1b74) = 1
            *(edi + *(arg1 + 0x10c) + 0x1ba8) = *(esi_15 + 0xa2ebb0)
            int32_t edx_9 = *(esi_15 + 0xa47d68)
            void* eax_65 = *(arg1 + 0x10c) + edi + 0x1818
            int32_t ecx_60 = *(esi_15 + 0xa47d64)
            *(eax_65 + 0x2b4) = 0
            *(eax_65 + 0x2ac) = ecx_60
            *(eax_65 + 0x2b0) = edx_9
            int32_t var_450_2 = 0
            void var_1cc
            __builtin_memcpy(&var_1cc, eax_65 + 0xac, 0x80)
            int32_t var_150
            *(&var_1cc + (var_150 << 2)) = 0xffffffff.q
            var_150 += 2
            __builtin_memcpy(eax_65 + 0x2b8, &var_1cc, 0x80)
            *(arg1 + 0x13c) += var_398
            *(arg1 + 0x13c) += *(edi + *(arg1 + 0x10c) + 0x218)
            var_398 = *(data_bac510 + 0xa47bf8)
        else
            int32_t var_468_9 = 7
            int32_t var_46c_7 = 0
            var_47c = 0
            sub_52e3c0(&var_47c, &esi_6[4], 0, 0xffffffff)
            sub_5ea6c0(*(arg1 + 0x10c) + 0x21c + edi, var_47c)
            int32_t var_468_10 = 0
            *(edi + *(arg1 + 0x10c) + 0x578) = 1
            *(edi + *(arg1 + 0x10c) + 0x5ac) = *(data_bac510 + 0xa2ebb0)
            *(edi + *(arg1 + 0x10c) + 0x214) = *(arg1 + 0x13c)
            void* esi_7 = *(arg1 + 0x10c)
            *(esi_7 + edi + 0x218) = sub_5ef9c0(esi_7 + 0x21c + edi, var_468_10)
            var_398 = 0
            *(arg1 + 0x13c) += *(edi + *(arg1 + 0x10c) + 0x218)
        result = *(arg1 + 0x118) - 1
        int32_t eax_93
        int32_t* ecx_84
        
        if (i_1 s>= result)
            int32_t* ecx_85 = *(arg1 + 0x410)
            char var_385_3
            int32_t ecx_87
            
            if (ecx_85 == 0)
                ecx_87 = var_38c
                var_385_3 = 0
            else
                void var_3c4
                result = sub_54d980(ecx_85, &var_3c4, 0)
                ecx_87 = var_38c | 4
                var_38c = ecx_87
                
                if (*result == 0)
                    var_385_3 = 0
                else
                    var_385_3 = 1
            
            if ((ecx_87.b & 4) != 0)
                var_38c = ecx_87 & 0xfffffffb
                int32_t* var_3c0
                
                if (var_3c0 != 0)
                    result = &var_3c0[1]
                    bool cond:9_1 = *result != 1
                    *result
                    *result -= 1
                    
                    if (not(cond:9_1))
                        (*(*var_3c0 + 4))(eax_2)
                        result = &var_3c0[2]
                        bool cond:12_1 = *result != 1
                        *result
                        *result -= 1
                        
                        if (not(cond:12_1))
                            result = (*(*var_3c0 + 8))()
            
            if (var_385_3 != 0)
                int32_t var_37c
                sub_6efae0(&var_37c)
                int128_t var_25c_1 = zx.o(0)
                int32_t var_8_4 = 4
                int32_t* ecx_93 = *(arg1 + 0x410)
                int32_t var_384 = *(arg1 + 0x13c)
                void var_3d4
                int32_t eax_99 = *(*sub_54d980(ecx_93, &var_3d4, 0) + 8)
                int32_t* var_3d0
                
                if (var_3d0 != 0)
                    bool cond:11_1 = var_3d0[1] != 1
                    var_3d0[1]
                    var_3d0[1] -= 1
                    
                    if (not(cond:11_1))
                        (*(*var_3d0 + 4))(eax_2)
                        bool cond:15_1 = var_3d0[2] != 1
                        var_3d0[2]
                        var_3d0[2] -= 1
                        
                        if (not(cond:15_1))
                            (*(*var_3d0 + 8))()
                
                int32_t eax_104 = data_4ebe2bc
                var_37c = 2
                int32_t* eax_105 = data_4ebe2c0
                
                if (eax_105 != 0)
                    eax_105[1]
                    eax_105[1] += 1
                
                operator new(&var_37c, eax_104, eax_105)
                int32_t eax_107 = data_4ebe2ec
                int32_t* eax_108 = data_4ebe2f0
                
                if (eax_108 != 0)
                    eax_108[1]
                    eax_108[1] += 1
                
                operator new[](&var_37c, eax_107, eax_108)
                sub_54d980(*(arg1 + 0x410), &var_3a4, 0)
                var_8_4.b = 5
                void var_2a4
                sub_5b17d0(&var_2a4, &var_3a4)
                var_8_4.b = 4
                
                if (var_3a0 != 0)
                    bool cond:17_1 = var_3a0[1] != 1
                    var_3a0[1]
                    var_3a0[1] -= 1
                    
                    if (not(cond:17_1))
                        (*(*var_3a0 + 4))(eax_2)
                        bool cond:19_1 = var_3a0[2] != 1
                        var_3a0[2]
                        var_3a0[2] -= 1
                        
                        if (not(cond:19_1))
                            (*(*var_3a0 + 8))()
                
                sub_5d4590(arg1 + 0x12c, &var_384)
                eax_93 = eax_99
                ecx_84 = &var_37c
            label_5d3a09:
                *(arg1 + 0x13c) += eax_93
                int32_t var_8_5 = 0xffffffff
                result = sub_6efc80(ecx_84)
        else
            int32_t* ecx_62 = *(arg1 + 0x400)
            char var_385_2
            int32_t ecx_64
            
            if (ecx_62 == 0)
                ecx_64 = var_38c
                var_385_2 = 0
            else
                void var_3bc
                result = sub_54d980(ecx_62, &var_3bc, 0)
                ecx_64 = var_38c | 2
                var_38c = ecx_64
                
                if (*result == 0)
                    var_385_2 = 0
                else
                    var_385_2 = 1
            
            if ((ecx_64.b & 2) != 0)
                var_38c = ecx_64 & 0xfffffffd
                int32_t* var_3b8
                
                if (var_3b8 != 0)
                    result = &var_3b8[1]
                    bool cond:10_1 = *result != 1
                    *result
                    *result -= 1
                    
                    if (not(cond:10_1))
                        (*(*var_3b8 + 4))(eax_2)
                        result = &var_3b8[2]
                        bool cond:14_1 = *result != 1
                        *result
                        *result -= 1
                        
                        if (not(cond:14_1))
                            result = (*(*var_3b8 + 8))()
            
            if (var_385_2 != 0)
                sub_6efae0(&var_144)
                int128_t var_24_2 = zx.o(0)
                int32_t var_8_3 = 2
                int32_t* ecx_70 = *(arg1 + 0x400)
                var_14c = *(arg1 + 0x13c)
                void var_3cc
                int32_t eax_78 = *(*sub_54d980(ecx_70, &var_3cc, 0) + 0x18)
                int32_t* var_3c8
                
                if (var_3c8 != 0)
                    bool cond:13_1 = var_3c8[1] != 1
                    var_3c8[1]
                    var_3c8[1] -= 1
                    
                    if (not(cond:13_1))
                        (*(*var_3c8 + 4))(eax_2)
                        bool cond:16_1 = var_3c8[2] != 1
                        var_3c8[2]
                        var_3c8[2] -= 1
                        
                        if (not(cond:16_1))
                            (*(*var_3c8 + 8))()
                
                int32_t eax_83 = data_4ebe2bc
                var_144 = 2
                int32_t* eax_84 = data_4ebe2c0
                
                if (eax_84 != 0)
                    eax_84[1]
                    eax_84[1] += 1
                
                operator new(&var_144, eax_83, eax_84)
                int32_t eax_86 = data_4ebe2ec
                int32_t* eax_87 = data_4ebe2f0
                
                if (eax_87 != 0)
                    eax_87[1]
                    eax_87[1] += 1
                
                operator new[](&var_144, eax_86, eax_87)
                sub_54d980(*(arg1 + 0x400), &var_3b4, 0)
                var_8_3.b = 3
                sub_5b17d0(&var_6c, &var_3b4)
                var_8_3.b = 2
                
                if (var_3b0 != 0)
                    bool cond:18_1 = var_3b0[1] != 1
                    var_3b0[1]
                    var_3b0[1] -= 1
                    
                    if (not(cond:18_1))
                        (*(*var_3b0 + 4))(eax_2)
                        bool cond:20_1 = var_3b0[2] != 1
                        var_3b0[2]
                        var_3b0[2] -= 1
                        
                        if (not(cond:20_1))
                            (*(*var_3b0 + 8))()
                
                sub_5d4590(arg1 + 0x12c, &var_14c)
                eax_93 = eax_78
                ecx_84 = &var_144
                var_398 = 0
                goto label_5d3a09
        i = i_1 + 1
        i_1 = i
    while (i s< *(arg1 + 0x118))

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
