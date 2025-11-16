// 函数: sub_4e3660
// 地址: 0x4e3660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_1cd4548

if (esi != 0 && *esi != 0)
    do
        int32_t* ecx_1 = esi[4]
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 8))(ecx_1)
        
        int32_t eax_2 = esi[8]
        esi[4] = 0
        eax_2(0)
        esi = &esi[9]
    while (*esi != 0)

int32_t* i = data_20f3468

for (int32_t ecx_2 = data_20f346c; i u< ecx_2; i = &i[1])
    void* eax = *i
    
    if (eax != 0)
        (*(eax + 0x1c))(0)
        ecx_2 = data_20f346c

if (data_1cd4520 == 0)
    return 

if (data_1cd4528 != 0)
    sub_4e3710(&data_1cd4520)
    data_1cd4528 = 0

int32_t* ecx_3 = data_1cd4544

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)

DeleteCriticalSection(&data_1cd452c)
data_1cd4520 = 0
