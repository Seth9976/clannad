// 函数: sub_587c60
// 地址: 0x587c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t var_24
void* ecx
int16_t* ecx_1 = sub_6c4e40(ecx, &var_24, arg2, 0)
int32_t esi = *(ecx_1 + 0x14)
int16_t* edx

if (esi u< 8)
    edx = ecx_1
else
    edx = *ecx_1

void* eax_4 = &edx[*(ecx_1 + 0x10)]

if (esi u>= 8)
    ecx_1 = *ecx_1

int16_t* var_2c = ecx_1
void** esi_1 = 0xffffffff
void** var_28

if (sub_6af490(eax_4, &var_28, &var_2c, eax_4) != 0)
    esi_1 = var_28

int32_t var_10

if (var_10 u>= 8)
    j__free(var_24.d)

int32_t result = 0
int32_t var_10_1 = 7
int32_t var_14 = 0
var_24 = 0

if (esi_1 s>= 0)
    void* edi_2 = esi_1 * 0xb4 + *(arg5 + 0xa4)
    result = arg3 - 1
    
    if (arg3 == 1)
        void** ecx_3 = arg4
        int32_t edx_2 = ecx_3[5]
        void** esi_2
        
        if (edx_2 u< 8)
            esi_2 = ecx_3
        else
            esi_2 = *ecx_3
        
        void* eax_8 = esi_2 + (ecx_3[4] << 1)
        
        if (edx_2 u>= 8)
            ecx_3 = *ecx_3
        
        var_28 = ecx_3
        int16_t* edx_4 = nullptr
        
        if (sub_6af490(eax_8, &var_2c, &var_28, eax_8) != 0)
            edx_4 = var_2c
        
        result = sub_5b80f0(edi_2, edx_4)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
