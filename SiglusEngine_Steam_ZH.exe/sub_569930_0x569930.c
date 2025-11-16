// 函数: sub_569930
// 地址: 0x569930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vevaluation_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg2
void** var_84 = ecx
int32_t var_50 = 0
int32_t var_58 = 0x1f4
void* eax_3
eax_3.b = *(data_bac41c + 0x864)
int32_t esi = *arg3
int32_t* var_54 = nullptr
int32_t edx
edx.b = eax_3.b != 0
int32_t var_64 = 0
int32_t var_34
__builtin_memset(&var_34, 0, 0x20)
int32_t var_74 = 0
int32_t var_5c = 0
int32_t var_78 = 0x80000000
int32_t var_70 = 0x7fffffff
bool var_6c = true
int32_t var_60 = 0xffffffff
int32_t var_68 = 0
int32_t var_3c = 0
int16_t var_4c = 0
int32_t var_8_1 = 0
int32_t eax_4 = *ecx

if (eax_4 == 0x17 || eax_4 == 0x32)
    var_5c = 0x7fffffff

if (eax_4 == 7 || eax_4 == 0x17)
    if (esi != 0)
        if (esi != 1)
            if (esi != 2)
                var_54 = *(arg3[1] + 0x2d0)
            
            var_58 = *(arg3[1] + 0x16c)
        
        var_50 = *(arg3[1] + 8)
    
    if (esi s>= 3)
        void* edx_4 = arg3[1]
        ecx = nullptr
        int32_t esi_2 = *(edx_4 + 0x588)
        
        if (esi_2 s> 0)
            int32_t* edx_6 = *(edx_4 + 0x574) + 8
            
            do
                int32_t eax_28 = *edx_6
                edx_6 = &edx_6[0x59]
                (&var_34)[ecx] = eax_28
                ecx += 1
            while (ecx s< esi_2)
else if (eax_4 == 0x33 || eax_4 == 0x32)
    if (esi != 0)
        if (esi != 1)
            if (esi != 2)
                var_54 = *(arg3[1] + 0x434)
            
            var_58 = *(arg3[1] + 0x2d0)
        
        var_50 = *(arg3[1] + 0x16c)
    
    ecx = &var_4c
    void** eax_16 = arg3[1] + 0xc
    
    if (&var_4c != eax_16)
        ecx = sub_52e3c0(ecx, eax_16, 0, 0xffffffff)
    
    if (esi s>= 3)
        void* edx_1 = arg3[1]
        ecx = nullptr
        int32_t esi_1 = *(edx_1 + 0x6ec)
        
        if (esi_1 s> 0)
            int32_t* edx_3 = *(edx_1 + 0x6d8) + 8
            
            do
                int32_t eax_17 = *edx_3
                edx_3 = &edx_3[0x59]
                (&var_34)[ecx] = eax_17
                ecx += 1
            while (ecx s< esi_1)

int32_t eax_29 = arg3[3]

for (void* i = arg3[2]; i u< eax_29; i += 0x164)
    switch (*i)
        case 0
            var_50 = *(i + 8)
        case 1
            var_58 = *(i + 8)
        case 2
            var_54 = *(i + 8)
        case 3
            int32_t edi_1 = *(i + 0x15c)
            ecx = nullptr
            
            if (edi_1 s> 0)
                int32_t* edx_8 = *(i + 0x148) + 8
                
                do
                    int32_t eax_34 = *edx_8
                    edx_8 = &edx_8[0x59]
                    (&var_34)[ecx] = eax_34
                    ecx += 1
                while (ecx s< edi_1)
        case 4
            var_74 = *(i + 8)
        case 5
            var_5c = *(i + 8)
        case 6
            var_78 = *(i + 8)
        case 7
            var_70 = *(i + 8)
        case 8
            var_6c = *(i + 8) != 0
        case 9
            var_60 = *(i + 8)
        case 0xa
            var_68 = *(i + 8)
        case 0xb
            var_64 = *(i + 8)

void* result = *var_84

if (result == 7 || result == 0x17)
    int32_t var_98_2 = var_70
    int32_t var_9c_2 = var_5c
    sub_6a65f0(edx, var_68, var_50, var_58, var_64, var_54, &var_34, var_6c.d, var_60.b, ecx, 1, 
        var_74, var_78)
else if (result == 0x33 || result == 0x32)
    int32_t var_98_1 = var_70
    int32_t var_9c_1 = var_5c
    int32_t var_a0_2 = var_78
    int32_t var_ac
    int32_t var_a8
    sub_6a6770(&var_4c, edx, var_68, var_50, var_58, var_64, var_54, &var_34, var_6c.d, var_60, 
        var_ac, var_a8, var_74)

if (7 u>= 8)
    j__free(var_4c.d)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
