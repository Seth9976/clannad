// 函数: sub_6ac6a0
// 地址: 0x6ac6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca703
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t (__fastcall* var_4a4)(int32_t* arg1) = sub_52e8a0
void var_398
sub_74675f(&var_398, 0x18, 0x10, sub_53a2c0)
int32_t var_8_1 = 0
int32_t ebx = 0
char var_3e0
sub_6af1a0(&var_3e0)
var_8_1.b = 1
char var_118 = 0
char var_117[0xff]
_memset(&var_117, 0, 0xff)
char var_218 = 0
char var_217[0xff]
_memset(&var_217, 0, 0xff)
void* lpFileName_1 = &var_398
int16_t var_3c8
int32_t var_3a0_1

for (int32_t i = 0; i s< 0x10; )
    int32_t var_4a4_3 = i + 1
    int32_t var_4a8_3 = 7
    int32_t var_4ac_3 = 0
    int16_t var_4bc = 0
    sub_52e720(&var_4bc, u".%03d", 5)
    int32_t var_410
    int16_t* eax_6 = sub_6ae4c0(&var_410, var_4bc)
    var_8_1.b = 2
    int16_t var_3f8
    int16_t* eax_7 = sub_532b80(eax_6, arg1, &var_3f8, &data_ad900c)
    var_8_1.b = 3
    int16_t var_3b0
    int16_t* eax_8 = sub_5327a0(eax_7, eax_7, &var_3b0, arg2)
    var_8_1.b = 4
    int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_3c8, eax_6)
    var_8_1.b = 5
    
    if (lpFileName_1 != eax_9)
        sub_52e3c0(lpFileName_1, eax_9, 0, 0xffffffff)
    
    int32_t var_3b4
    
    if (var_3b4 u>= 8)
        j__free(var_3c8.d)
    
    var_3b4 = 7
    int32_t var_3b8_1 = 0
    var_3c8 = 0
    int32_t var_39c
    
    if (var_39c u>= 8)
        j__free(var_3b0.d)
    
    var_39c = 7
    var_3a0_1 = 0
    var_3b0 = 0
    int32_t var_3e4
    
    if (var_3e4 u>= 8)
        j__free(var_3f8.d)
    
    var_8_1.b = 1
    var_3e4 = 7
    int32_t var_3e8_1 = 0
    var_3f8 = 0
    int32_t var_3fc
    
    if (var_3fc u>= 8)
        j__free(var_410)
    
    void* lpFileName
    
    if (*(lpFileName_1 + 0x14) u< 8)
        lpFileName = lpFileName_1
    else
        lpFileName = *lpFileName_1
    
    uint32_t eax_10 = GetFileAttributesW(lpFileName)
    
    if (eax_10 == 0xffffffff)
        break
    
    if ((eax_10.b & 0x10) != 0)
        break
    
    i += 1
    ebx += 1
    lpFileName_1 += 0x18

int32_t edi = ebx
int32_t i_2 = 8
int32_t var_3cc

if (edi s<= 0)
    i_2.b = 0
else
    int32_t esi_2 = 0
    int32_t var_484_1 = 0
    int32_t arg_4
    
    if (edi s<= 0)
    label_6acaa9:
        char* eax_17 = &var_3e0
        
        if (var_3cc u>= 0x10)
            eax_17 = var_3e0.d
        
        void* var_3d0
        sub_748840(&var_118, eax_17, var_3d0, eax_2)
        
        if (arg_4 s>= 2)
            void var_478
            sub_6bc9a0(sub_6bc910(&var_478, i_2), &var_118, &var_478, i_2)
            i_2 = 0x10
            int128_t var_42c
            var_118.o = var_42c
        
        char* ecx_15 = &var_118
        void* edx_7 = &var_218
        int32_t i_3 = i_2
        i_2 -= 4
        
        if (i_3 u>= 4)
            int32_t i_1
            
            do
                if (*ecx_15 != *edx_7)
                    goto label_6acb36
                
                ecx_15 = &ecx_15[4]
                edx_7 += 4
                i_1 = i_2
                i_2 -= 4
            while (i_1 u>= 4)
        
        if (i_2 == 0xfffffffc)
            i_2.b = 1
        else
        label_6acb36:
            int32_t* eax_18
            eax_18.b = *ecx_15
            
            if (eax_18.b != *edx_7)
                i_2.b = 0
            else if (i_2 == 0xfffffffd)
                i_2.b = 1
            else
                eax_18.b = ecx_15[1]
                
                if (eax_18.b != *(edx_7 + 1))
                    i_2.b = 0
                else if (i_2 == 0xfffffffe)
                    i_2.b = 1
                else
                    eax_18.b = ecx_15[2]
                    
                    if (eax_18.b != *(edx_7 + 2))
                        i_2.b = 0
                    else if (i_2 == 0xffffffff)
                        i_2.b = 1
                    else
                        eax_18.b = ecx_15[3]
                        
                        if (eax_18.b != *(edx_7 + 3))
                            i_2.b = 0
                        else
                            i_2.b = 1
    else
        void* var_488_1 = &var_398
        
        while (true)
            int32_t* var_3a8 = nullptr
            var_3a0_1.q = 0
            var_8_1.b = 6
            void* const var_4a4_12 = 2
            int32_t var_3b4_1 = 7
            int32_t* var_4a8_5 = &data_af335c
            int32_t var_3b8_2 = 0
            var_3c8 = 0
            sub_52e720(&var_3c8, var_4a8_5, var_4a4_12)
            var_8_1.b = 7
            var_8_1.b = 6
            struct _EXCEPTION_REGISTRATION_RECORD** eax_11
            eax_11.b = sub_6b7a80(&var_3a8, var_488_1, &var_3c8).b == 0
            char var_47d_1 = eax_11.b
            
            if (var_3b4_1 u>= 8)
                j__free(var_3c8.d)
                eax_11.b = var_47d_1
            
            if (eax_11.b != 0)
                var_8_1.b = 1
                sub_6b73d0(var_3a8)
                break
            
            if (arg_4 s>= 2)
                sub_6b74a0(eax_11, 4, &arg_4, var_3a8)
                eax_11 = 0x10
                
                if (arg_4 s>= 2)
                    i_2 = 0x10
            
            int32_t* var_4a4_16 = var_3a8
            int32_t var_47c = 0
            sub_6b74a0(eax_11, 4, &var_47c, var_4a4_16)
            char eax_12 = arg3.b
            var_47c.b ^= eax_12
            var_47c:1.b ^= eax_12
            var_47c:2.b ^= eax_12
            var_47c:3.b ^= eax_12
            void* eax_14
            int32_t* edx_4
            edx_4:eax_14 = sx.q(var_47c)
            int32_t eax_15 = sub_6b7820(eax_14, FILE_BEGIN, var_3a8, eax_14, edx_4)
            
            if (var_484_1 s< i_2)
                do
                    char* edi_1 = &(&var_218)[esi_2]
                    sub_6b74a0(eax_15, 1, edi_1, var_3a8)
                    eax_15 = arg3
                    *edi_1 ^= eax_15.b
                    edi = ebx
                    esi_2 += edi
                while (esi_2 s< i_2)
            
            var_8_1.b = 1
            
            if (sub_6b73d0(var_3a8) != 0)
                var_3a8 = nullptr
                var_3a0_1.q = 0
            
            var_488_1 += 0x18
            esi_2 = var_484_1 + 1
            var_484_1 = esi_2
            
            if (esi_2 s>= edi)
                goto label_6acaa9
        
        i_2.b = 0

if (var_3cc u>= 0x10)
    j__free(var_3e0.d)

int32_t (__fastcall* var_4a4_22)(int32_t* arg1) = sub_52e8a0
int32_t var_4a8_9 = 0x10
int32_t var_4ac_6 = 0x18
int32_t var_3cc_1 = 0xf
void* var_4b0_1 = &var_398
int32_t var_3d0_1 = 0
var_3e0 = 0
int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(var_4b0_1, var_4ac_6, var_4a8_9, var_4a4_22)
int32_t result
result.b = i_2.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
