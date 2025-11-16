// 函数: sub_6c8930
// 地址: 0x6c8930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc6d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_80 = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg2 + 4)
void* esi = nullptr
int128_t xmm0 = *(arg2 + 0x14)
int32_t eax_4 = *(arg2 + 8)
int32_t eax_5 = *(arg2 + 0xc)
int32_t eax_6 = *(arg2 + 0x10)
int32_t eax_9 = (*(arg2 + 0x28) - *(arg2 + 0x24)) s>> 5
void* var_58 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_8_1 = 0
int32_t var_1c = 0
HBITMAP result
int32_t ecx_6

if (eax_9 s<= 0)
label_6c8b07:
    int32_t var_9c_2 = xmm0.d
    int32_t var_98_3 = xmm0:4.d
    int32_t var_94_4 = xmm0:8.d
    int32_t var_90_7 = xmm0:0xc.d
    int32_t var_a8_1 = eax_4
    int32_t var_ac_1 = eax_3
    int32_t var_a4_1 = eax_5
    int32_t var_a0_2 = eax_6
    void var_b8
    sub_6c8ef0(&var_b8, &var_58)
    result, ecx_6 = sub_6c98e0(arg1)
    ebx.b = 1
else
    int32_t var_18_1 = 0
    
    while (true)
        int32_t* esi_1 = sub_745f3f(0x78)
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            sub_6c7fd0(esi_1)
            esi_1[0x1b] = 0
            esi_1[0x1c] = 0
            esi_1[0x1d].b = 0
        
        int32_t* var_4c = esi_1
        int32_t var_48_1 = 0
        var_8_1.b = 1
        int32_t* var_20
        int32_t* eax_11 = sub_6c9080(&var_20, esi_1)
        int32_t* ecx_2 = *eax_11
        int32_t* var_48_2 = ecx_2
        *eax_11 = var_48_1
        int32_t* edi_1 = var_20
        
        if (edi_1 != 0)
            bool cond:0_1 = edi_1[1] != 1
            ecx_2 = edi_1[1]
            edi_1[1] -= 1
            
            if (not(cond:0_1))
                ecx_2 = (*(*edi_1 + 4))(eax_2)
                bool cond:2_1 = edi_1[2] != 1
                edi_1[2]
                edi_1[2] -= 1
                
                if (not(cond:2_1))
                    ecx_2 = (*(*edi_1 + 8))()
        
        int32_t* var_90_3 = esi_1
        int32_t* var_94_1 = esi_1
        void** var_98_1 = &var_4c
        var_8_1.b = 2
        int32_t* esi_2 = var_4c
        int32_t var_90_4 = 0
        void* edi_3 = *(arg2 + 0x24) + var_18_1
        int32_t eax_17 = *(edi_3 + 4)
        int32_t var_2c_1 = *(edi_3 + 8)
        int32_t eax_18
        eax_18.b = *(edi_3 + 0x14)
        char var_11_1 = eax_18.b
        result, ecx_6 = sub_6c8170(esi_2, *(edi_3 + 0xc), *(edi_3 + 0x10), ecx_2, 0)
        
        if (result.b == 0)
            var_8_1.b = 0
            
            if (var_48_2 != 0)
                ecx_6 = var_48_2[1].d
                var_48_2[1].d -= 1
                
                if (var_48_2[1].d == 1)
                    ecx_6 = (*(*var_48_2 + 4))(eax_2)
                    var_48_2[2].d -= 1
                    
                    if (var_48_2[2].d == 1)
                        result, ecx_6 = (*(*var_48_2 + 8))()
            
            esi = var_58
            ebx.b = 0
            break
        
        bool cond:1_1 = esi_2[0xd].b == 0
        esi_2[0x1b] = eax_17
        esi_2[0x1c] = var_2c_1
        int32_t eax_20
        eax_20.b = var_11_1
        esi_2[0x1d].b = eax_20.b
        void* ecx_7
        
        if (cond:1_1)
            ecx_7 = esi_2[0xe]
            
            if (ecx_7 == esi_2[0xf])
                ecx_7 = nullptr
        else
            ecx_7 = esi_2[0x11]
        
        sub_6dd0a0(edi_3, ecx_7, esi_2[0x16] << 2)
        sub_578460(&var_58, &var_4c)
        var_8_1.b = 0
        
        if (var_48_2 != 0)
            bool cond:4_1 = var_48_2[1] != 1
            var_48_2[1]
            var_48_2[1] -= 1
            
            if (not(cond:4_1))
                (*(*var_48_2 + 4))(eax_2)
                bool cond:5_1 = var_48_2[2] != 1
                var_48_2[2]
                var_48_2[2] -= 1
                
                if (not(cond:5_1))
                    (*(*var_48_2 + 8))()
        
        var_18_1 += 0x20
        int32_t edi_5 = var_1c + 1
        var_1c = edi_5
        
        if (edi_5 s>= eax_9)
            esi = var_58
            goto label_6c8b07

int32_t var_8_2 = 0xffffffff

if (esi != 0)
    int32_t* var_90_8 = arg1
    int32_t var_94_5 = ecx_6
    sub_579a70(esi, var_54)
    j__free(esi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
