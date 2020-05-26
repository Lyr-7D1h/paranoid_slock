# Maintainer: Lyr <lyr-7d1h@pm.me>

pkgname=slock
pkgver=1.4
pkgrel=3
pkgdesc="A simple screen locker for X - Configured for paranoids"
arch=('x86_64')
url="https://tools.suckless.org/slock"
license=('MIT')
depends=('libxext' 'libxrandr')

build() {
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}
