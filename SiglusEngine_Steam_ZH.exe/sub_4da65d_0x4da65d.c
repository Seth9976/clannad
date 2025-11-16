// 函数: sub_4da65d
// 地址: 0x4da65d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edx = 0
void* entry_ebx
bool cond:0 = *(entry_ebx + 0xf22) != 0
*(entry_ebx + 0x60) = 0

if (cond:0)
    return 

int32_t eax_1 = 0
void* const i = &data_acd948
void* var_c_1 = entry_ebx + 0x1e88
int32_t edi
int32_t var_14_1 = edi

do
    int32_t j = 0
    *var_c_1 = eax_1
    
    if (1 << (*i).b s> 0)
        do
            *(entry_ebx + eax_1 + 0x1b85) = edx.b
            eax_1 += 1
            j += 1
        while (j s< 1 << (*i).b)
    
    var_c_1 += 4
    i += 4
    edx += 1
while (i s< 0xacd9b8)

*(eax_1 + entry_ebx + 0x1b84) = edx.b
int32_t eax_2 = 0
int32_t edx_1 = 0
void* const i_1 = &data_acd9c0
void* var_c_2 = entry_ebx + 0x1efc

do
    int32_t j_1 = 0
    *var_c_2 = eax_2
    
    if (1 << (*i_1).b s> 0)
        do
            *(entry_ebx + eax_2 + 0x1c85) = edx_1.b
            eax_2 += 1
            j_1 += 1
        while (j_1 s< 1 << (*i_1).b)
    
    var_c_2 += 4
    i_1 += 4
    edx_1 += 1
while (i_1 s< 0xacda00)

int32_t eax_3 = eax_2 s>> 7

if (edx_1 s< 0x1e)
    void* i_2 = (edx_1 << 2) + &data_acd9c0
    void* var_c_3 = entry_ebx + (edx_1 << 2) + 0x1efc
    
    do
        int32_t j_2 = 0
        *var_c_3 = eax_3 << 7
        
        if (1 << ((*i_2).b - 7) s> 0)
            do
                *(entry_ebx + eax_3 + 0x1d85) = edx_1.b
                eax_3 += 1
                j_2 += 1
            while (j_2 s< 1 << ((*i_2).b - 7))
        
        var_c_3 += 4
        i_2 += 4
        edx_1 += 1
    while (i_2 s< 0xacda38)

__builtin_memset(entry_ebx + 0x1034, 0, 0x20)
void* eax_4 = entry_ebx + 0xaa2
int32_t i_8 = 0x90
int32_t i_3

do
    *eax_4 = 8
    eax_4 += 4
    *(entry_ebx + 0x1044) += 1
    i_3 = i_8
    i_8 -= 1
while (i_3 != 1)
void* eax_5 = entry_ebx + 0xce2
int32_t i_9 = 0x70
int32_t i_4

do
    *eax_5 = 9
    eax_5 += 4
    *(entry_ebx + 0x1046) += 1
    i_4 = i_9
    i_9 -= 1
while (i_4 != 1)
void* eax_6 = entry_ebx + 0xea2
int32_t i_10 = 0x18
int32_t i_5

do
    *eax_6 = 7
    eax_6 += 4
    *(entry_ebx + 0x1042) += 1
    i_5 = i_10
    i_10 -= 1
while (i_5 != 1)
void* eax_7 = entry_ebx + 0xf02
int32_t i_11 = 8
int32_t i_6

do
    *eax_7 = 8
    eax_7 += 4
    *(entry_ebx + 0x1044) += 1
    i_6 = i_11
    i_11 -= 1
while (i_6 != 1)
sub_4d9cda(entry_ebx + 0xaa0, entry_ebx, 0x11f)
int32_t i_7 = 0
void* edx_2 = entry_ebx + 0xf20

do
    *(edx_2 + 2) = 5
    *edx_2 = sub_4d98eb(i_7.b, 5)
    i_7 += 1
    edx_2 += 4
while (i_7 s< 0x1e)

sub_4d9a29(entry_ebx)
