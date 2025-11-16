// 函数: sub_496f90
// 地址: 0x496f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
void* ebx_1 = arg1[0x6a]
int32_t* edi
int32_t* var_10 = edi
int32_t* var_14 = arg1
sub_496d00(var_14)
int32_t ecx_1 = sub_496f10(arg1)
*(ebx_1 + 0xc) = 0
*(ebx_1 + 0x10) = sub_496c80(ecx_1, arg1)
int32_t eax_2 = arg1[0x15]
*(ebx_1 + 0x14) = 0
*(ebx_1 + 0x18) = 0

if (eax_2 == 0 || arg1[0x10] == 0)
    arg1[0x19] = 0
    arg1[0x1a] = 0
    arg1[0x1b] = 0

if (eax_2 != 0)
    if (arg1[0x11] != 0)
        void* eax_3 = *arg1
        var_14 = arg1
        *(eax_3 + 0x14) = 0x2f
        (*eax_3)(var_14)
    
    if (arg1[0x1e] != 3)
        arg1[0x1a] = 0
        arg1[0x1b] = 0
        arg1[0x22] = 0
        arg1[0x19] = 1
    else if (arg1[0x22] != 0)
        arg1[0x1a] = 1
    else if (arg1[0x17] == 0)
        arg1[0x19] = 1
    else
        arg1[0x1b] = 1
    
    if (arg1[0x19] != 0)
        void* eax_4 = *arg1
        var_14 = arg1
        *(eax_4 + 0x14) = 0x30
        (*eax_4)(var_14)
    
    if (arg1[0x1b] != 0 || arg1[0x1a] != 0)
        void* eax_5 = *arg1
        var_14 = arg1
        *(eax_5 + 0x14) = 0x30
        (*eax_5)(var_14)

if (arg1[0x11] == 0)
    bool cond:2_1 = *(ebx_1 + 0x10) == 0
    var_14 = arg1
    
    if (cond:2_1)
        sub_4e1e10(var_14)
        var_14 = arg1
        sub_4e0ea0(var_14)
    else
        sub_4e2aa0(var_14)
    
    var_14 = arg1[0x1b]
    sub_4dffb0(arg1, var_14)

var_14 = arg1
sub_4dfe20(var_14)
bool cond:1 = arg1[0x39] == 0
var_14 = arg1
int32_t** esp_1 = &var_14

if (not(cond:1))
    void* eax_7 = *arg1
    *(eax_7 + 0x14) = 1
    (*eax_7)()
else if (arg1[0x38] == 0)
    sub_4dee50(var_14)
    esp_1 = &var_10
else
    sub_4dfa50(var_14)
    esp_1 = &var_10

int32_t eax_8

if (*(arg1[0x6e] + 0x10) != 0 || arg1[0x10] != 0)
    eax_8 = 1
else
    eax_8 = 0

*(esp_1 - 4) = eax_8
*(esp_1 - 8) = arg1
sub_4de220()
void* esp_4 = esp_1

if (*0x45 == 0)
    *(esp_4 - 4) = 0
    *(esp_4 - 8) = 1
    sub_4dd200()

int32_t edx_1 = *5
*(esp_4 - 4) = 1
(*(edx_1 + 0x18))()
int32_t eax_9 = *0x1b9
*(esp_4 - 8) = 1
(*(eax_9 + 8))()
void* result = *9

if (result != 0 && *0x41 == 0 && *(*0x1b9 + 0x10) != 0)
    int32_t ecx_4 = *0x25
    
    if (*0xe1 != 0)
        ecx_4 = ecx_4 * 3 + 2
    
    int32_t edx_3 = *0x145 * ecx_4
    *(result + 4) = 0
    *(result + 8) = edx_3
    int32_t ecx_5
    ecx_5.b = *0x6d != 0
    *(result + 0xc) = 0
    *(result + 0x10) = ecx_5 + 2
    *(ebx_1 + 0xc) += 1

*(esp_4 - 8)
*(esp_4 - 4)
return result
