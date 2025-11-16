// 函数: sub_6bd550
// 地址: 0x6bd550
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_RunAndWait@_StructuredTaskCollection@details@Concurrency@@QAG?AW4_TaskCollectionStatus@23@PAV_UnrealizedChore@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_30 = 0
struct std::streambuf::VTable* const var_7c = &std::streambuf::`vftable'
struct std::locale::facet::std::locale::_Locimp::VTable*** eax_3
int32_t* ecx
char* edx
eax_3, ecx, edx = sub_745f3f(4)
struct std::locale::facet::std::locale::_Locimp::VTable*** var_48

if (eax_3 == 0)
    var_48 = nullptr
else
    struct std::locale::facet::std::locale::_Locimp::VTable** eax_4
    eax_4, ecx, edx = sub_7611d0(1)
    *eax_3 = eax_4
    var_48 = eax_3

int32_t var_74 = 0
int32_t var_78
int32_t* var_70 = &var_78
int32_t* var_6c = &var_74
int32_t var_68
int32_t* var_60 = &var_68
int32_t var_64
int32_t* var_5c = &var_64
int32_t var_58
int32_t* var_50 = &var_58
int32_t var_54
int32_t* var_24 = &var_54
int32_t* var_4c = &var_54
var_64 = 0
var_54 = 0
var_78 = 0
var_68 = 0
var_58 = 0
int32_t var_44 = 0
struct std::streambuf::VTable* const var_28 = &std::stringbuf::`vftable'{for `std::streambuf'}
var_7c = &std::stringbuf::`vftable'{for `std::streambuf'}
int32_t var_40 = 0
char* eax_5 = arg2
int32_t var_8_1 = 1

if (eax_5 != 0)
    int32_t esi_1 = arg4
    bool cond:0_1 = esi_1 s<= 0
    
    if (esi_1 == 0)
        char* esi_2 = eax_5
        
        do
            eax_5.b = *esi_2
            esi_2 = &esi_2[1]
        while (eax_5.b != 0)
        
        eax_5 = arg2
        esi_1 = esi_2 - &esi_2[1]
        cond:0_1 = esi_1 s<= 0
    
    if (not(cond:0_1))
        char* edi_1 = 1
        
        while (true)
            edx.b = *(eax_5 + edi_1 - 1)
            ecx.b = 0
            result.b = 0
            
            if (edi_1 s< esi_1)
                ecx.b = *(edi_1 + eax_5)
            
            if (&edi_1[1] s< esi_1)
                result.b = *(edi_1 + arg2 + 1)
            
            void* eax_6
            eax_6.b = edx.b
            edx.b &= 3
            eax_6.b u>>= 2
            void* var_14_1 = eax_6
            eax_6.b = ecx.b
            eax_6.b u>>= 4
            ecx.b &= 0xf
            edx.b <<= 4
            edx.b |= eax_6.b
            ecx.b <<= 2
            eax_6.b = result.b
            eax_6.b u>>= 6
            result.b &= 0x3f
            ecx.b |= eax_6.b
            void* eax_7
            
            if (var_14_1.b u< 0x1a)
                eax_7.b = var_14_1.b + 0x41
            else if (var_14_1.b u< 0x34)
                eax_7.b = var_14_1.b + 0x47
            else if (var_14_1.b u>= 0x3e)
                eax_7.b = var_14_1.b != 0x3e
                eax_7 = (eax_7 << 2) + 0x2b
            else
                eax_7.b = var_14_1.b - 4
            
            char var_14_2 = eax_7.b
            int32_t ecx_5
            
            if (*var_5c != 0)
                ecx_5 = *var_24
            
            if (*var_5c == 0 || ecx_5 s<= 0)
                var_28->vFunc_3(zx.d(eax_7.b))
            else
                *var_24 = ecx_5 - 1
                char* edx_2 = *var_5c
                *var_5c = &edx_2[1]
                *edx_2 = var_14_2
            
            char* ecx_7
            
            if (edx.b u< 0x1a)
                ecx_7.b = edx.b + 0x41
            else if (edx.b u< 0x34)
                ecx_7.b = edx.b + 0x47
            else if (edx.b u>= 0x3e)
                ecx_7.b = edx.b != 0x3e
                ecx_7 = (ecx_7 << 2) + 0x2b
            else
                ecx_7.b = edx.b - 4
            
            char var_18_2 = ecx_7.b
            int32_t eax_14
            
            if (*var_5c != 0)
                eax_14 = *var_4c
            
            if (*var_5c == 0 || eax_14 s<= 0)
                var_7c->vFunc_3(zx.d(ecx_7.b))
            else
                *var_4c = eax_14 - 1
                char* edx_4 = *var_5c
                *var_5c = &edx_4[1]
                *edx_4 = var_18_2
            
            if (edi_1 s>= esi_1)
                int32_t eax_26
                
                if (*var_5c != 0)
                    eax_26 = *var_4c
                
                if (*var_5c == 0 || eax_26 s<= 0)
                    var_7c->vFunc_3(0x3d)
                else
                    *var_4c = eax_26 - 1
                    char* edx_7 = *var_5c
                    *var_5c = &edx_7[1]
                    *edx_7 = 0x3d
            else
                int32_t* ecx_9
                
                if (ecx.b u< 0x1a)
                    ecx_9.b = ecx.b + 0x41
                else if (ecx.b u< 0x34)
                    ecx_9.b = ecx.b + 0x47
                else if (ecx.b u>= 0x3e)
                    ecx_9.b = ecx.b != 0x3e
                    ecx_9 = (ecx_9 << 2) + 0x2b
                else
                    ecx_9.b = ecx.b - 4
                
                char var_1c_2 = ecx_9.b
                int32_t eax_21
                
                if (*var_5c != 0)
                    eax_21 = *var_4c
                
                if (*var_5c == 0 || eax_21 s<= 0)
                    var_7c->vFunc_3(zx.d(ecx_9.b))
                else
                    *var_4c = eax_21 - 1
                    char* edx_6 = *var_5c
                    *var_5c = &edx_6[1]
                    *edx_6 = var_1c_2
            
            if (&edi_1[1] s>= esi_1)
                int32_t eax_37
                
                if (*var_5c != 0)
                    eax_37 = *var_4c
                
                if (*var_5c == 0 || eax_37 s<= 0)
                    edx, ecx = var_7c->vFunc_3(0x3d)
                else
                    *var_4c = eax_37 - 1
                    edx = *var_5c
                    *var_5c = &edx[1]
                    *edx = 0x3d
            else
                if (result.b u< 0x1a)
                    result.b += 0x41
                else if (result.b u< 0x34)
                    result.b += 0x47
                else if (result.b u>= 0x3e)
                    result.b = result.b != 0x3e
                    result = (result << 2) + 0x2b
                else
                    result.b -= 4
                
                int32_t eax_32
                
                if (*var_5c != 0)
                    eax_32 = *var_4c
                
                if (*var_5c == 0 || eax_32 s<= 0)
                    edx, ecx = var_7c->vFunc_3(zx.d(result.b))
                else
                    *var_4c = eax_32 - 1
                    edx = *var_5c
                    *var_5c = &edx[1]
                    *edx = result.b
            
            edi_1 = &edi_1[3]
            
            if (&edi_1[0xffffffff] s>= esi_1)
                break
            
            var_24 = var_4c
            var_28 = var_7c
            eax_5 = arg2
        
        result = result_1
    
    sub_6bd9b0(&var_7c, result)
    int32_t var_8_3 = 0xffffffff
    var_7c = &std::stringbuf::`vftable'{for `std::streambuf'}
    
    if ((var_40.b & 1) != 0)
        j__free(*var_70)
    
    *var_70 = 0
    *var_60 = 0
    *var_50 = 0
    *var_6c = 0
    *var_5c = 0
    *var_4c = 0
    int32_t var_40_1 = var_40 & 0xfffffffe
    int32_t var_44_1 = 0
else
    sub_541920(result, eax_5)
    int32_t var_8_2 = 0xffffffff
    var_7c = &std::stringbuf::`vftable'{for `std::streambuf'}
    sub_6b3680(&var_7c)

var_7c = &std::streambuf::`vftable'

if (var_48 != 0)
    struct std::locale::facet::std::locale::_Locimp::VTable** ecx_17 = *var_48
    
    if (ecx_17 != 0)
        int32_t* eax_52 = (*ecx_17)->vFunc_2(eax_2)
        
        if (eax_52 != 0)
            (**eax_52)(1)
    
    j__free(var_48)

fsbase->NtTib.ExceptionList = ExceptionList
return result
