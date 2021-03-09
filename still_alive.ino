// frequencies //

int ai6 = 1864.66;
int a6 = 1760.00;
int g = 1567.98;
int fi = 1479.98;
int f = 1396.91;
int fi5 = 739.989;
int f5 = 698.456;
int e = 1318.51;
int ai = 932.328;
int a = 880;
int d = 1174.66;
int ci = 1108.73;
int c = 1046.50;
int b6 = 1975.53;
int b = 987.767;

// note duration //

int ei = 254;
int qu = 2 * ei;
int ha = 4 * ei;
int te = qu + ei;

int x(int y, int z)
{
  tone(8, y);
  delay(z);
  noTone(8);
}

void setup()
{
}

void loop()
{

  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, ei);
  x(fi, ha);
  delay(ha + qu + ei);
  x(a, ei);
  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, qu);
  x(fi, te);
  x(d, qu);
  x(e, ei);
  x(a, qu);
  delay(ei + ha);

  x(a, ei);
  x(e, qu);
  x(fi, ei);
  x(g, te);
  x(e, ei);
  x(ci, qu);
  x(d, te);
  x(e, qu);
  x(a, ei);
  x(a, qu);
  x(fi, te);
  delay(ha + ha);

  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, ei);
  x(fi, ha);
  delay(ha + qu + ei);
  x(a, ei);
  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, te);
  x(fi, ei);
  x(d, te);
  x(e, ei);
  x(a, ei + ha);
  delay(ha);

  x(e, qu);
  x(fi, ei);
  x(g, te);
  x(e, ei);
  x(ci, te);
  x(d, ei);
  x(e, qu);
  x(a, ei);
  x(d, ei);
  x(e, ei);
  x(f, ei);
  x(e, ei);
  x(d, ei);
  x(c, ei);
  delay(qu);
  x(a, ei);
  x(ai, ei);
  x(c, qu);
  x(f, qu);
  x(e, ei);
  x(d, ei);
  x(d, ei);
  x(c, ei);
  x(d, ei);
  x(c, ei);
  x(c, qu);
  x(c, qu);
  x(a, ei);
  x(ai, ei);
  x(c, qu);
  x(f, qu);
  x(g, ei);
  x(f, ei);
  x(e, ei);
  x(d, ei);
  x(d, ei);
  x(e, ei);
  x(f, qu);
  x(f, qu);
  x(g, ei);
  x(a6, ei);
  x(ai6, ei);
  x(ai6, ei);
  x(a6, qu);
  x(g, qu);
  x(f, ei);
  x(g, ei);
  x(a6, ei);
  x(a6, ei);
  x(g, qu);
  x(f, qu);
  x(d, ei);
  x(c, ei);
  x(d, ei);
  x(f, ei);
  x(f, ei);
  x(e, ei);
  x(e, qu);
  x(fi, ei);
  x(fi, ei);

  delay(27 * ei);

  x(a, ei);
  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, qu);
  x(fi, ei);

  delay(10 * ei);

  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, te);
  x(fi, ei);
  x(d, qu);
  x(e, qu);
  x(a, te);

  delay(6 * ei);

  x(e, qu);
  x(fi, ei);
  x(g, ei + qu);
  x(e, qu);
  x(ci, qu);
  x(d, ei);
  x(e, ei + qu);
  x(a, ei);
  x(a, qu);
  x(fi, ei);

  delay(8 * ei);

  x(a, ei);
  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, ei);
  x(fi, ei);

  delay(11 * ei);

  x(a, ei);
  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, ei + qu);
  x(fi, ei);
  x(d, ei + qu);
  x(e, ei);
  x(a, ei + qu);

  delay(6 * ei);

  /* as they burned it hurt... */
  x(e, qu);
  x(fi, ei);
  x(g, ei + qu);
  x(e, qu);
  x(ci, qu);
  x(d, ei);
  x(e, qu);
  x(a, ei);
  x(d, ei);
  x(e, ei);

  /* key change */
  x(f, ei);
  x(e, ei);
  x(d, qu);
  x(c, qu);

  x(a, ei);
  x(ai, ei);
  x(c, qu);
  x(f, qu);
  x(e, ei);
  x(d, ei);
  x(d, ei);
  x(c, ei);
  x(d, ei);
  x(c, ei);
  x(c, qu);
  x(c, qu);
  x(a, ei);
  x(ai, ei);
  x(c, qu);
  x(f, qu);
  x(g, ei);
  x(f, ei);
  x(e, ei);
  x(d, ei);
  x(d, ei);
  x(e, ei);
  x(f, qu);
  x(f, qu);
  x(g, ei);
  x(a6, ei);
  x(ai6, ei);
  x(ai6, ei);
  x(a6, qu);
  x(g, qu);
  x(f, ei);
  x(g, ei);
  x(a6, ei);
  x(a6, ei);
  x(g, ei);
  x(f, ei);

  x(f, qu);
  x(d, ei);
  x(c, ei);
  x(d, ei);
  x(f, ei);
  x(f, ei);
  x(e, ei);
  x(ci, ei);
  x(e, ei);
  x(fi, ei);
  x(fi, ei);

  /* key changes back */

  delay(28 * ei);

  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, qu);
  x(fi, te);

  delay(7 * ei);

  x(a, ei);
  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, te);
  x(fi, ei);
  x(d, te);
  x(e, ei);
  x(a, 5 * ei);

  delay(ha);

  x(e, qu);
  x(fi, ei);
  x(g, te);
  x(e, qu);
  x(ci, qu);
  x(d, ei);
  x(e, te);
  x(a, ei);
  x(a, qu);
  x(fi, te);

  delay(2 * ha);

  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, qu);
  x(fi, te);

  delay(2 * ha);

  x(g, ei);
  x(fi, ei);
  x(e, ei);
  x(e, te);

  x(fi, ei);
  x(d, te);

  x(e, ei);
  x(a, 5 * ei);

  delay(ha);

  x(e, qu);
  x(fi, ei);
  x(g, te);
  x(e, qu);

  x(ci, qu);
  x(d, ei);
  x(e, qu);
  x(a, ei);
  x(d, ei);
  x(e, ei);

  // key change:

  x(f, ei);
  x(e, ei);
  x(d, ei);
  x(c, te);

  x(a, ei);
  x(ai, ei);
  x(c, qu);
  x(f, qu);
  x(e, ei);
  x(d, ei);
  x(d, ei);
  x(c, ei);
  x(d, ei);
  x(c, ei);
  x(c, qu);
  x(c, qu);
  x(a, ei);
  x(ai, ei);
  x(c, qu);
  x(f, qu);
  x(g, ei);
  x(f, ei);
  x(e, ei);
  x(d, ei);
  x(d, ei);
  x(e, ei);
  x(f, qu);
  x(f, qu);

  x(g, ei);
  x(a6, ei);
  x(ai6, ei);
  x(ai6, ei);
  x(a6, ei);
  x(g, ei);
  x(g, qu);

  x(f, ei);
  x(g, ei);
  x(a6, ei);
  x(a6, ei);
  x(g, ei);
  x(f, ei);
  x(f, qu);
  x(d, ei);
  x(c, ei);
  x(d, ei);
  x(f, ei);
  x(f, ei);
  x(e, qu);
  x(e, ei);
  x(fi, ei);
  x(fi, 5 * ei);

  //key change

  delay(2 * ei);

  x(a6, ei);
  x(a6, ei / 2);
  x(b6, ei / 2 + ei);
  x(a6, ei);
  x(fi, ei);
  x(d, qu);
  x(e, ei);
  x(fi, ei);
  x(fi, qu);

  delay(3 * ei);

  x(a6, ei);
  x(a6, ei);
  x(a6, ei);
  x(b6, ei);
  x(a6, ei);
  x(fi, ei);
  x(d, qu);
  x(e, ei);
  x(fi, ei);
  x(fi, te);

  delay(te);

  x(a6, ei);
  x(a6, ei);
  x(a6, ei);
  x(b6, ei);
  x(a6, ei);
  x(fi, ei);
  x(d, qu);
  x(e, ei);
  x(fi, ei);
  x(fi, te);

  delay(ha);

  x(a6, ei);
  x(a6, ei);
  x(b6, ei);
  x(a6, ei);
  x(fi, ei);
  x(d, qu);
  x(e, ei);
  x(fi, ei);
  x(fi, te);

  delay(te);

  x(a6, ei);
  x(a6, ei);
  x(a6, ei);
  x(b6, ei);
  x(a6, ei);
  x(fi, ei);
  x(d, qu);
  x(e, ei);
  x(fi, ei);
  x(fi, 5 * ei);

  delay(ei);

  x(g, ei);
  x(a6, ei);
  x(a6, te);

  delay(3 * ei);

  x(g, ei);
  x(fi, ei);
  x(fi, te);

  delay(100 * ha);
}
