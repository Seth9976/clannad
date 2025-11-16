// 函数: sub_4ed3e0
// 地址: 0x4ed3e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3

if (esi[6] == 0 && esi[3] == 0)
    return 

int32_t eax = *esi
int32_t ecx_2
arg1, ecx_2 = sub_4ec600(arg2, eax)

if (arg1 != 0)
    return 

ecx_2.b = 0
void* ecx_3 = sub_420350(ecx_2)
int32_t eax_1 = data_1af0f3c
char* edx_1 = esi[6]
char eax_2 = data_1af17c9
int32_t eax_3 = data_1370100
char eax_4 = data_1311176

if (edx_1 != 0)
    ecx_3 = sub_420170(eax, edx_1)

if (data_702fc0 != 0 && data_1b14e6c != 0)
    ecx_3 = esi[6]
    
    if (ecx_3 != 0)
        ecx_3 = sub_41bd70()

int32_t* edx_2 = esi[9]
arg3 = edx_2

if (*esi u<= 0x3f)
    esi[0xa] = esi[0xe]
    esi[0xb] = esi[0xf]
    esi[0xc] = esi[0x10]
    esi[0xd] = esi[0x11]

if (esi[7] == 0)
    char* eax_9 = esi[6]
    
    if (eax_9 != 0 && *eax_9 != 0)
        esi[9] = eax_9
        
        if (*eax_9 != 0)
            do
                void* var_2c_1 = ecx_3
                int32_t var_30_1 = 1
                ecx_3 = sub_4ed130(eax_9, arg2, ecx_3, esi, 0, 0)
                eax_9 = esi[9]
            while (*eax_9 != 0)
            
            edx_2 = arg3
        
        esi[0xc] = 1

int32_t eax_10 = esi[3]

if (eax_10 != 0 && data_1b14e74 s> 0)
    esi[9] = eax_10
    int32_t edi_1 = 0
    
    while (true)
        void* ecx_6 = data_1b14e74
        
        if (edi_1 == ecx_6 - 1 && *esi u<= 0x3f)
            esi[0x12] = esi[0xa]
            esi[0x13] = esi[0xb]
            esi[0x14] = esi[0xc]
            esi[0x15] = esi[0xd]
            ecx_6 = data_1b14e74
        
        if (edi_1 == ecx_6)
            break
        
        char* eax_16 = esi[9]
        
        if (*eax_16 == 0)
            break
        
        void* var_2c_2 = ecx_6
        int32_t var_30_2 = 1
        sub_4ed130(eax_16, arg2, ecx_6, esi, 1, 0)
        edi_1 += 1
    
    edx_2 = arg3
    
    if (*esi u<= 0x3f)
        esi[0xa] = esi[0x12]
        esi[0xb] = esi[0x13]
        esi[0xc] = esi[0x14]
        esi[0xd] = esi[0x15]

esi[9] = edx_2

if (arg5 == 0 && data_1b14e6c == 0 && eax u<= 0x3f)
    sub_460e20(eax, 0, eax * 0x3920 + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 0xffffffff, 0)

if (arg4 != 0)
    data_1af0f3c = eax_1
    data_1af17c9 = eax_2

data_1370100 = eax_3
data_1311176 = eax_4
