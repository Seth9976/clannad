// 函数: sub_64dab0
// 地址: 0x64dab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1

if (*(arg1 + 0x1d4) != 0)
    return 

void* edi_1

if (*(arg1 + 0x1d8) == 0)
    char eax_2
    
    if (*(arg1 + 0x1b8) s> 0)
        eax_2 = sub_5d84f0(arg1, 0)
    
    if (*(arg1 + 0x1b8) s<= 0 || eax_2 != 0)
        edi_1 = data_bac458
    else
        sub_5d9490(arg1)
        edi_1 = data_bac458
        sub_53a350(edi_1 + 0x2fc)
else
    sub_5d9490(arg1)
    edi_1 = data_bac458
    bool cond:0_1 = *(edi_1 + 0x310) u< 8
    void** eax_1 = edi_1 + 0x2fc
    eax_1[4] = 0
    
    if (not(cond:0_1))
        eax_1 = *eax_1
    
    *eax_1 = nullptr

sub_5d94f0(arg1)
sub_5d8d60(arg1)
int32_t var_10_1 = sub_6761b0()
sub_696dc0()
*(arg1 + 0x1d4) = 1
sub_650760()

if (*(edi_1 + 0x492) == 0)
    sub_658680()

void* eax_3 = data_bac468
int32_t ecx_5 = *(eax_3 + 0xd4)
void* eax

if (ecx_5 s>= 0)
    eax = sub_55e1a0(ecx_5 * 0x15c + *(eax_3 + 0xc8))

if (ecx_5 s>= 0 && eax == 1)
    return 

eax = data_bac4a0
*(eax + 0x248) += 1

if (*(eax + 0x248) s>= 0xa)
    *(eax + 0x248) = 0
