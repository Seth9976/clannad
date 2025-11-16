// 函数: sub_6feb80
// 地址: 0x6feb80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce743
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t* eax_4 = *arg1
*arg1 = 0

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)

bool cond:0 = esi[5] u< 8
int32_t var_70 = 0
int32_t* var_88 = nullptr
int32_t var_64 = 0

if (not(cond:0))
    esi = *esi

int32_t* var_a4_2 = &var_70
void* var_a8 = &var_64
int32_t* var_ac = nullptr
int32_t* var_b0 = &var_88
int32_t* var_b4 = nullptr
int32_t* var_b8 = data_4ebe4b0
int32_t* eax_5 = sub_40addd(esi, 0x220, var_b8, var_b4, var_b0, var_ac, var_a8, var_a4_2)
int32_t result
void var_d0

if (eax_5 s>= 0)
    int32_t var_8_3 = 1
    int32_t* eax_7 = *arg1
    int32_t var_68_1 = 0
    *arg1 = var_70
    
    if (eax_7 != 0)
        (*(*eax_7 + 8))(eax_7)
    
    int32_t* edi_1 = var_88
    int32_t* var_90_1 = edi_1
    int32_t var_8_4 = 2
    int32_t* ebx_1 = *arg1
    int32_t esi_2 = *ebx_1
    int32_t eax_9 = (*(esi_2 + 0x2c))(ebx_1, (*(esi_2 + 0x24))(ebx_1, 0x152, data_4ebe4b0, &var_70))
    
    if (eax_9 s>= 0)
        ebx_1 = arg1
        var_8_4.b = 4
        int32_t var_6c_1 = 0
        int32_t* eax_11 = *ebx_1
        *ebx_1 = var_70
        
        if (eax_11 != 0)
            (*(*eax_11 + 8))(eax_11)
        
        var_8_4.b = 2
        void* eax_13 = (*(*edi_1 + 0xc))(edi_1)
        sub_6ff020(&ebx_1[1], var_64)
        sub_55c750(arg3, var_64)
        
        if (var_64 s> 0)
            int32_t ebx_2 = 0
            int32_t var_74_1 = 0
            void* esi_5 = eax_13 + 0x44
            int32_t edi_2 = 0
            
            do
                int128_t* ecx_15 = ebx_1[1]
                *(ecx_15 + ebx_2) = *(esi_5 - 0x44)
                void* ecx_16 = ecx_15 + ebx_2
                *(ecx_16 + 0x10) = *(esi_5 - 0x34)
                *(ecx_16 + 0x20) = *(esi_5 - 0x24)
                *(ecx_16 + 0x30) = *(esi_5 - 0x14)
                *(ecx_16 + 0x40) = *(esi_5 - 4)
                int128_t* eax_15 = ebx_1[1]
                *(eax_15 + ebx_2 + 0x10) = *(eax_15 + ebx_2)
                char* edx_4 = *esi_5
                
                if (edx_4 != 0)
                    int32_t var_1c_1 = 0xf
                    int32_t var_20_1 = 0
                    char var_30 = 0
                    void* ecx_17
                    
                    if (*edx_4 != 0)
                        char* ecx_18 = edx_4
                        void* eax_16
                        
                        do
                            eax_16.b = *ecx_18
                            ecx_18 = &ecx_18[1]
                        while (eax_16.b != 0)
                        ecx_17 = ecx_18 - &ecx_18[1]
                    else
                        ecx_17 = nullptr
                    
                    sub_541eb0(&var_30, edx_4, ecx_17)
                    var_8_4.b = 5
                    int16_t var_48
                    sub_6af1e0(&var_48)
                    var_8_4.b = 7
                    
                    if (var_1c_1 u>= 0x10)
                        j__free(var_30.d)
                    
                    int32_t var_1c_2 = 0xf
                    int32_t var_20_2 = 0
                    var_30 = 0
                    int32_t* ecx_22 = *arg3 + var_74_1
                    
                    if (ecx_22 != &var_48)
                        sub_52e3c0(ecx_22, &var_48, 0, 0xffffffff)
                    
                    var_8_4.b = 2
                    int32_t var_34
                    
                    if (var_34 u>= 8)
                        j__free(var_48.d)
                    
                    var_34 = 7
                    int32_t var_38_1 = 0
                    var_48 = 0
                
                var_74_1 += 0x18
                edi_2 += 1
                ebx_2 += 0x50
                esi_5 += 0x48
            while (edi_2 s< var_64)
            
            ebx_1 = arg1
        
        int32_t* eax_18 = *ebx_1
        int32_t* var_7c = nullptr
        float* var_80 = nullptr
        (*(*eax_18 + 0x34))(eax_18, &var_7c)
        int32_t* esi_6 = var_7c
        int32_t* var_68_4 = esi_6
        var_8_4.b = 8
        
        if ((*(*esi_6 + 0x2c))(esi_6, 0, 0, &var_80, 0) s>= 0)
            ebx_1 = *ebx_1
            float var_60
            float var_54
            float eax_25 = (*(*ebx_1 + 0x14))(ebx_1, 
                sub_40b13a((*(*ebx_1 + 0x18))(ebx_1, &var_60)), &var_54, eax_2)
            sub_40b028(var_80, eax_25)
            float var_5c
            float var_50
            *(arg1 + 0x10) = _mm_unpacklo_ps(var_54 - var_60, var_50 - var_5c)
            float var_58
            float var_4c
            arg1[6] = var_4c - var_58
            int32_t* eax_27 = var_7c
            (*(*eax_27 + 0x30))(eax_27)
            ebx_1.b = 1
        else
            ebx_1.b = 0
        
        var_8_4.b = 2
        (*(*esi_6 + 8))(esi_6)
    else
        int32_t** var_68_3 = &var_b8
        sub_52e820(&var_b8, u"CloneMeshFVF")
        var_8_4.b = 3
        int16_t* eax_10
        int32_t edx_2
        eax_10, edx_2 = sub_52e820(&var_d0, 0xb085f8)
        var_8_4.b = 2
        sub_6f1ae0(eax_10, edx_2, eax_9)
        ebx_1.b = 0
    
    int32_t var_8_5 = 0xffffffff
    
    if (edi_1 != 0)
        (*(*edi_1 + 8))(edi_1)
    
    result.b = ebx_1.b
else
    int32_t** var_68 = &var_b8
    sub_52e820(&var_b8, u"LoadMesh")
    int32_t var_8_1 = 0
    int16_t* eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_52e820(&var_d0, 0xb085d8)
    int32_t var_8_2 = 0xffffffff
    sub_6f1ae0(eax_6, edx_1, eax_5)
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
