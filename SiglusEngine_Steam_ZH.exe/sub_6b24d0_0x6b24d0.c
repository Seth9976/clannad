// 函数: sub_6b24d0
// 地址: 0x6b24d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1
int32_t eax_1 = arg1[1]
sub_6b1d70(&arg1[2])
sub_6b1d70(&arg1[0x16])
sub_6b1d70(&arg1[0x2a])
arg1[0x3e] = 0
arg1[0x3f] = 0
sub_6b22c0(&arg1[0x40])
bool cond:0 = arg1[0x1443] != 1
*arg1 = arg1[0x1440]
arg1[1] = arg1[0x1441]
arg1[2] = arg1[0x1442]
arg1[0x16] = arg1[0x1456]
arg1[0x2a] = arg1[0x146a]

if (not(cond:0))
    sub_6b1df0(&arg1[2])

if (arg1[0x1444] == 1)
    sub_6b1e50(&arg1[2])

if (arg1[0x1457] == 1)
    sub_6b1df0(&arg1[0x16])

if (arg1[0x1458] == 1)
    sub_6b1e50(&arg1[0x16])

if (arg1[0x146b] == 1)
    sub_6b1df0(&arg1[0x2a])

if (arg1[0x146c] == 1)
    sub_6b1e50(&arg1[0x2a])

int32_t ecx_10 = arg1[0x1441]
void* esi = &arg1[0x43]
int32_t i_3 = 0x100
arg1[6] += arg1[0x1440] - eax
arg1[7] += ecx_10 - eax_1
int32_t ecx_13 = arg1[0x1441] - eax_1
arg1[0x1a] += arg1[0x1440] - eax
arg1[0x1b] += ecx_13
arg1[0x3f] += arg1[0x147f]
arg1[0x3e] += arg1[0x147e]
int32_t i

do
    bool cond:2_1 = *(esi + 0x50f8) != 1
    *(esi - 0xc) = *(esi + 0x50f4)
    
    if (not(cond:2_1))
        *(esi - 0xc) = 1
        
        if (*(esi - 8) == 0)
            *(esi - 8) = 1
        
        if (*esi == 0)
            *esi = 1
        
        *(esi + 4) = 0
        void* eax_15 = esi + 0x14
        *(esi + 8) = 0
        int32_t j_1 = 2
        int32_t j
        
        do
            *(eax_15 - 8) = 0
            eax_15 += 4
            *(eax_15 - 4) = 0
            *(eax_15 + 4) = 0
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    if (*(esi + 0x50fc) == 1)
        sub_6b1e50(esi - 0xc)
    
    esi += 0x50
    i = i_3
    i_3 -= 1
while (i != 1)
arg1[0x1443] = i_3
void* result = &arg1[0x1482]
arg1[0x1444] = i_3
int32_t i_2 = 0x100
arg1[0x1445] = i_3
arg1[0x1457] = i_3
arg1[0x1458] = i_3
arg1[0x1459] = i_3
arg1[0x146b] = i_3
arg1[0x146c] = i_3
arg1[0x146d] = i_3
arg1[0x147e] = i_3
arg1[0x147f] = i_3
int32_t i_1

do
    *(result - 4) = 0
    result += 0x50
    *(result - 0x50) = 0
    *(result - 0x4c) = 0
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
